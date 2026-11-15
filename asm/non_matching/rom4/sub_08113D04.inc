	THUMB_FUNC_START sub_08113D04
sub_08113D04: @ 0x08113D04
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08113D68  @ =gRam
	ldr r1, _08113D6C  @ =0x00000EE2
	add r0, r2, r1
	add r0, r4, r0
	ldr r3, _08113D70  @ =0x000016C4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r6, _08113D74  @ =0x00000F02
	add r0, r2, r6
	add r0, r4, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	mov r6, #182
	lsl r6, r6, #5
	add r0, r2, r6
	ldrh r0, [r0]
	add r0, r0, #8
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r6, _08113D78  @ =0x00000ED2
	add r0, r2, r6
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08113D7C  @ =0x00000EF2
	add r0, r2, r1
	add r0, r4, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	add r6, r6, #240
	add r0, r2, r6
	add r5, r4, r0
	ldrb r3, [r5]
	cmp r3, #0
	bne _08113D80
	add r0, r4, #0
	mov r1, #1
	bl sub_08113EA4
	b _08113D9E
_08113D68:
	.4byte gRam
_08113D6C:
	.4byte 0x00000EE2
_08113D70:
	.4byte 0x000016C4
_08113D74:
	.4byte 0x00000F02
_08113D78:
	.4byte 0x00000ED2
_08113D7C:
	.4byte 0x00000EF2
_08113D80:
	ldr r1, _08113DD4  @ =0x00000546
	add r0, r2, r1
	ldrb r0, [r0]
	mov r1, #240
	and r1, r1, r0
	ldr r6, _08113DD8  @ =0x00000547
	add r0, r2, r6
	ldrb r2, [r0]
	mov r0, #207
	and r0, r0, r2
	orr r1, r1, r0
	cmp r1, #0
	beq _08113D9E
	sub r0, r3, #1
	strb r0, [r5]
_08113D9E:
	ldr r2, _08113DDC  @ =gRam
	ldr r0, _08113DE0  @ =0x00000F92
	add r3, r2, r0
	add r3, r4, r3
	ldr r1, _08113DE4  @ =0x00000996
	add r2, r2, r1
	ldrb r0, [r2]
	add r0, r4, r0
	lsr r0, r0, #2
	mov r1, #1
	eor r0, r0, r1
	and r0, r0, r1
	strb r0, [r3]
	ldrb r1, [r2]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _08113DCE
	add r0, r4, #0
	mov r1, #36
	bl sub_080CF0AC
_08113DCE:
	pop {r4-r6}
	pop {r0}
	bx r0
_08113DD4:
	.4byte 0x00000546
_08113DD8:
	.4byte 0x00000547
_08113DDC:
	.4byte gRam
_08113DE0:
	.4byte 0x00000F92
_08113DE4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_08113D04

