	THUMB_FUNC_START sub_08094C90
sub_08094C90: @ 0x08094C90
	push {r4,lr}
	ldr r3, _08094CCC  @ =gRam
	ldr r0, _08094CD0  @ =0x00001705
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _08094CD4  @ =0x0000097C
	add r0, r3, r1
	ldrb r1, [r0]
	lsl r0, r1, #24
	asr r0, r0, #28
	orr r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	strb r0, [r1]
	mov r2, #7
	and r2, r2, r0
	add r4, r3, #0
	cmp r2, #0
	bne _08094CDC
	ldr r3, _08094CD8  @ =0x0000172C
	add r0, r4, r3
	strb r2, [r0]
	b _08094DA0
	.byte 0x00
	.byte 0x00
_08094CCC:
	.4byte gRam
_08094CD0:
	.4byte 0x00001705
_08094CD4:
	.4byte 0x0000097C
_08094CD8:
	.4byte 0x0000172C
_08094CDC:
	ldr r1, _08094D24  @ =0x000016C4
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08094D30
	mov r3, #1
	ldr r2, _08094D28  @ =0x000016D6
	add r0, r4, r2
	ldrb r1, [r0]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _08094D0E
	mvn r1, r1
	lsl r1, r1, #24
	mov r0, #128
	lsl r0, r0, #17
	add r1, r1, r0
	lsl r0, r2, #24
	and r0, r0, r1
	cmp r0, #0
	beq _08094D10
_08094D0E:
	mov r3, #255
_08094D10:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	strb r3, [r0]
	ldr r2, _08094D2C  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	mov r3, #4
	b _08094D66
_08094D24:
	.4byte 0x000016C4
_08094D28:
	.4byte 0x000016D6
_08094D2C:
	.4byte 0x00000961
_08094D30:
	mov r3, #1
	ldr r1, _08094DA8  @ =0x000016D6
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08094D56
	mvn r1, r1
	lsl r1, r1, #24
	mov r0, #128
	lsl r0, r0, #17
	add r1, r1, r0
	lsl r0, r2, #24
	and r0, r0, r1
	cmp r0, #0
	beq _08094D56
	mov r3, #255
_08094D56:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	strb r3, [r0]
	ldr r2, _08094DAC  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
_08094D66:
	add r2, r4, #0
	ldr r1, _08094DB0  @ =0x00001705
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08094D7C
	ldr r1, _08094DB4  @ =0x000016D5
	add r0, r2, r1
	strb r3, [r0]
_08094D7C:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r2, r3
	ldrh r1, [r2]
	mov r3, #0
	ldrsh r0, [r2, r3]
	cmp r0, #127
	ble _08094D94
	ldr r3, _08094DB8  @ =0xFFFFFF00
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
_08094D94:
	ldr r0, _08094DBC  @ =0x000016C4
	add r1, r4, r0
	ldrh r0, [r2]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
_08094DA0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08094DA8:
	.4byte 0x000016D6
_08094DAC:
	.4byte 0x00000961
_08094DB0:
	.4byte 0x00001705
_08094DB4:
	.4byte 0x000016D5
_08094DB8:
	.4byte 0xFFFFFF00
_08094DBC:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_08094C90

