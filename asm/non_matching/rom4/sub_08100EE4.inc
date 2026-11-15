	THUMB_FUNC_START sub_08100EE4
sub_08100EE4: @ 0x08100EE4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #206
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _08100F92
	add r0, r5, #0
	mov r1, #44
	bl sub_080CF140
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r6, _08100F98  @ =gRam
	ldr r0, _08100F9C  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	ldrb r0, [r0]
	add r0, r0, #4
	strb r0, [r1]
	ldr r0, _08100FA0  @ =0x00001082
	add r3, r6, r0
	add r1, r4, r3
	add r3, r5, r3
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r2, _08100FA4  @ =0x00000F22
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _08100FA8  @ =gUnknown_0817AE41
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08100FAC  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _08100FB0  @ =gUnknown_0817AE51
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08100FB4  @ =0x00000F62
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r2, _08100FB8  @ =0x00001172
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08100FBC  @ =0x00001012
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	sub r2, r2, #64
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #20
	strb r1, [r0]
	mov r1, #0
	ldr r2, _08100FC0  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #236
	bne _08100F7C
	mov r1, #1
_08100F7C:
	cmp r1, #0
	beq _08100F92
	ldr r0, _08100FC4  @ =0x00000EA5
	add r2, r6, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #6
	orr r0, r0, r1
	strb r0, [r2]
_08100F92:
	pop {r4-r6}
	pop {r0}
	bx r0
_08100F98:
	.4byte gRam
_08100F9C:
	.4byte 0x00000EE2
_08100FA0:
	.4byte 0x00001082
_08100FA4:
	.4byte 0x00000F22
_08100FA8:
	.4byte gUnknown_0817AE41
_08100FAC:
	.4byte 0x00000F12
_08100FB0:
	.4byte gUnknown_0817AE51
_08100FB4:
	.4byte 0x00000F62
_08100FB8:
	.4byte 0x00001172
_08100FBC:
	.4byte 0x00001012
_08100FC0:
	.4byte 0x000009DA
_08100FC4:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_08100EE4

