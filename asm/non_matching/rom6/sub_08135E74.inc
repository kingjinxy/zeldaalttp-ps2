	THUMB_FUNC_START sub_08135E74
sub_08135E74: @ 0x08135E74
	push {r4,r5,lr}
	sub sp, sp, #164
	add r5, r1, #0
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r0, _08135E8C  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrh r0, [r0, #4]
	cmp r4, r0
	bcc _08135E94
	ldr r0, _08135E90  @ =0x000080FF
	b _08135F38
_08135E8C:
	.4byte gUnknown_03000020
_08135E90:
	.4byte 0x000080FF
_08135E94:
	ldr r0, _08135ED4  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrb r0, [r0, #8]
	lsl r0, r0, #1
	mov r1, sp
	add r3, r0, r1
	add r3, r3, #132
	mov r0, #0
	strh r0, [r3]
	sub r3, r3, #2
	mov r1, #0
_08135EAA:
	ldrh r2, [r5]
	add r5, r5, #2
	mov r0, #0
_08135EB0:
	strh r2, [r3]
	sub r3, r3, #2
	lsr r2, r2, #1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bls _08135EB0
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bls _08135EAA
	mov r1, #0
	ldr r0, _08135ED4  @ =gUnknown_03000020
	add r2, r0, #0
	ldr r0, [r0]
	b _08135EE6
_08135ED4:
	.4byte gUnknown_03000020
_08135ED8:
	strh r4, [r3]
	sub r3, r3, #2
	lsr r4, r4, #1
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, [r2]
_08135EE6:
	ldrb r0, [r0, #8]
	cmp r1, r0
	bcc _08135ED8
	mov r0, #0
	strh r0, [r3]
	sub r3, r3, #2
	mov r0, #1
	strh r0, [r3]
	mov r1, #208
	lsl r1, r1, #20
	ldr r0, _08135F40  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrb r2, [r0, #8]
	add r2, r2, #67
	mov r0, sp
	bl sub_08135D44
	ldr r0, _08135F44  @ =gUnknown_084272BC
	bl sub_08135C78
	mov r4, #0
	mov r1, #208
	lsl r1, r1, #20
	mov r3, #1
	ldr r2, _08135F48  @ =gUnknown_03000014
_08135F18:
	ldrh r0, [r1]
	and r0, r0, r3
	cmp r0, #0
	bne _08135F32
	ldrb r0, [r2]
	cmp r0, #0
	beq _08135F18
	ldrh r0, [r1]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08135F32
	ldr r4, _08135F4C  @ =0x0000C001
_08135F32:
	bl sub_08135D00
	add r0, r4, #0
_08135F38:
	add sp, sp, #164
	pop {r4,r5}
	pop {r1}
	bx r1
_08135F40:
	.4byte gUnknown_03000020
_08135F44:
	.4byte gUnknown_084272BC
_08135F48:
	.4byte gUnknown_03000014
_08135F4C:
	.4byte 0x0000C001
	THUMB_FUNC_END sub_08135E74

