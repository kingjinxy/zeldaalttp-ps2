	THUMB_FUNC_START sub_08093CF8
sub_08093CF8: @ 0x08093CF8
	push {r4-r6,lr}
	ldr r1, _08093D4C  @ =gRam
	ldr r2, _08093D50  @ =0x000016C4
	add r0, r1, r2
	ldrb r3, [r0]
	ldr r0, _08093D54  @ =0x0000172E
	add r6, r1, r0
	ldrb r2, [r6]
	add r4, r1, #0
	cmp r2, #6
	bne _08093D14
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_08093D14:
	mov r5, #7
	and r3, r3, r5
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _08093D58  @ =0x00000978
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	asr r0, r0, #24
	neg r0, r0
	asr r0, r0, #31
	mov r1, #2
	and r0, r0, r1
	ldrb r1, [r6]
	lsl r1, r1, #2
	ldr r3, _08093D5C  @ =0x00000961
	add r2, r4, r3
	strb r1, [r2]
	cmp r0, #0
	bne _08093D64
	ldr r1, _08093D60  @ =0x00001708
	add r0, r4, r1
	b _08093D68
	.byte 0x00
	.byte 0x00
_08093D4C:
	.4byte gRam
_08093D50:
	.4byte 0x000016C4
_08093D54:
	.4byte 0x0000172E
_08093D58:
	.4byte 0x00000978
_08093D5C:
	.4byte 0x00000961
_08093D60:
	.4byte 0x00001708
_08093D64:
	ldr r2, _08093DA4  @ =0x0000170C
	add r0, r4, r2
_08093D68:
	ldrb r0, [r0]
	add r3, r5, #0
	and r3, r3, r0
	ldr r1, _08093DA8  @ =0x00000961
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r3, r0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _08093DAC  @ =0x000016E4
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08093DFC
	ldr r3, _08093DB0  @ =0x000016C4
	add r0, r4, r3
	ldrb r0, [r0]
	mov r3, #7
	and r3, r3, r0
	ldr r1, _08093DB4  @ =0x0000172E
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #4
	beq _08093DB8
	cmp r2, #6
	beq _08093DB8
	neg r0, r3
	b _08093DCC
_08093DA4:
	.4byte 0x0000170C
_08093DA8:
	.4byte 0x00000961
_08093DAC:
	.4byte 0x000016E4
_08093DB0:
	.4byte 0x000016C4
_08093DB4:
	.4byte 0x0000172E
_08093DB8:
	add r1, r3, #0
	sub r1, r1, #8
	neg r1, r1
	ldr r2, _08093DF0  @ =0x00000964
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _08093DF4  @ =gUnknown_08167D02
	add r0, r5, r0
	ldrb r0, [r0]
	sub r0, r0, r1
_08093DCC:
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08093DF8  @ =0x000016D7
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _08093E9A
	lsl r0, r2, #24
	cmp r0, #0
	bge _08093DE6
	neg r0, r3
	lsl r0, r0, #24
	lsr r3, r0, #24
_08093DE6:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r3, [r0]
	b _08093E0E
_08093DF0:
	.4byte 0x00000964
_08093DF4:
	.4byte gUnknown_08167D02
_08093DF8:
	.4byte 0x000016D7
_08093DFC:
	ldr r0, _08093E40  @ =gUnknown_08167D02
	add r0, r5, r0
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	ldrb r0, [r0]
	ldrb r1, [r2]
	sub r0, r0, r1
	strb r0, [r2]
_08093E0E:
	ldr r1, _08093E44  @ =0x000016D7
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08093E9A
	cmp r0, #0
	bge _08093E4C
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	ble _08093E9A
	ldr r0, _08093E48  @ =0x000016C4
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r3, #2
	b _08093E74
_08093E40:
	.4byte gUnknown_08167D02
_08093E44:
	.4byte 0x000016D7
_08093E48:
	.4byte 0x000016C4
_08093E4C:
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _08093E9A
	ldr r2, _08093EA0  @ =0x000016C4
	add r0, r4, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r3, #255
	lsl r3, r3, #8
	add r2, r3, #0
	orr r1, r1, r2
	ldrh r2, [r0]
	add r1, r1, r2
	strh r1, [r0]
	mov r3, #1
_08093E74:
	ldr r0, _08093EA4  @ =0x0000172B
	add r5, r4, r0
	strb r3, [r5]
	mov r2, #0
	ldr r1, _08093EA8  @ =0x0000172E
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08093E8C
	mov r2, #1
_08093E8C:
	ldr r0, _08093EAC  @ =gUnknown_08167D22
	add r0, r2, r0
	ldrb r0, [r0]
	mov r1, #32
	orr r0, r0, r1
	orr r3, r3, r0
	strb r3, [r5]
_08093E9A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08093EA0:
	.4byte 0x000016C4
_08093EA4:
	.4byte 0x0000172B
_08093EA8:
	.4byte 0x0000172E
_08093EAC:
	.4byte gUnknown_08167D22
	THUMB_FUNC_END sub_08093CF8

