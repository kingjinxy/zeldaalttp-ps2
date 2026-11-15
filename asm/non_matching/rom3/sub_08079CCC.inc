	THUMB_FUNC_START sub_08079CCC
sub_08079CCC: @ 0x08079CCC
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _08079D8C  @ =0x0000FFFF
	ldr r2, _08079D90  @ =gRam
	mov r1, #178
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _08079D94  @ =0x0000195C
	add r3, r2, r0
_08079CE0:
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, r1
	beq _08079D02
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, #5
	bne _08079CE0
	ldr r0, _08079D90  @ =gRam
	ldr r1, _08079D98  @ =0x00000B0E
	add r0, r0, r1
	ldrh r4, [r0]
	ldr r0, _08079D8C  @ =0x0000FFFF
	cmp r4, r0
	bne _08079D28
_08079D02:
	mov r4, #0
	ldr r3, _08079D9C  @ =0x00000BC4
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08079D28
	mov r1, #188
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _08079D28
	mov r0, sp
	bl sub_08079A10
	lsl r0, r0, #24
	cmp r0, #0
	bne _08079D28
	mov r4, #1
_08079D28:
	ldr r5, _08079D90  @ =gRam
	mov r2, #177
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r3, [r1]
	cmp r4, r3
	beq _08079D82
	mov r0, #0
	strh r4, [r1]
	add r2, r2, #240
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _08079DA0  @ =0x00000C02
	add r1, r5, r3
	strh r0, [r1]
	cmp r4, #0
	bne _08079D7A
	ldr r1, _08079DA4  @ =0x000016C4
	add r0, r5, r1
	ldr r2, _08079DA8  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08079DAC  @ =0x00000504
	add r1, r5, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldr r3, _08079DB0  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08079DB4  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #59
	bl sub_0812A324
_08079D7A:
	ldr r0, _08079DB8  @ =0x000009AD
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
_08079D82:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08079D8C:
	.4byte 0x0000FFFF
_08079D90:
	.4byte gRam
_08079D94:
	.4byte 0x0000195C
_08079D98:
	.4byte 0x00000B0E
_08079D9C:
	.4byte 0x00000BC4
_08079DA0:
	.4byte 0x00000C02
_08079DA4:
	.4byte 0x000016C4
_08079DA8:
	.4byte 0x00000952
_08079DAC:
	.4byte 0x00000504
_08079DB0:
	.4byte 0x00000958
_08079DB4:
	.4byte 0x00000506
_08079DB8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08079CCC

