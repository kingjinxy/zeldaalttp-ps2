	THUMB_FUNC_START sub_08123F94
sub_08123F94: @ 0x08123F94
	push {r4-r6,lr}
	mov r1, #10
	ldr r5, _08123FB8  @ =gRam
	ldr r0, _08123FBC  @ =0x00000E15
	add r2, r5, r0
_08123F9E:
	lsl r6, r1, #24
	asr r4, r6, #24
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _08123FC0
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bne _08123F9E
	b _08124032
	.byte 0x00
	.byte 0x00
_08123FB8:
	.4byte gRam
_08123FBC:
	.4byte 0x00000E15
_08123FC0:
	mov r0, #50
	strb r0, [r1]
	ldr r1, _08124038  @ =0x00000E47
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _0812403C  @ =gUnknown_020030C0
	add r1, r4, r3
	mov r0, #16
	strb r0, [r1]
	ldr r1, _08124040  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r3, _08124044  @ =0x00000DED
	add r2, r5, r3
	add r2, r4, r2
	ldr r3, _08124048  @ =gUnknown_08180494
	lsl r0, r0, #1
	add r1, r0, r3
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _0812404C  @ =0x00000DF7
	add r1, r5, r2
	add r1, r4, r1
	add r0, r0, #1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _08124050  @ =0x00000968
	add r2, r5, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r1, _08124054  @ =gUnknown_020030A0
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r0, #8
	sub r3, r3, #8
	add r1, r5, r3
	strh r0, [r1]
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r1, _08124058  @ =gUnknown_020030B0
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r0, #16
	ldr r2, _0812405C  @ =0x00000964
	add r1, r5, r2
	strh r0, [r1]
	lsr r0, r6, #24
	bl sub_080ABA78
_08124032:
	pop {r4-r6}
	pop {r0}
	bx r0
_08124038:
	.4byte 0x00000E47
_0812403C:
	.4byte gUnknown_020030C0
_08124040:
	.4byte 0x00000996
_08124044:
	.4byte 0x00000DED
_08124048:
	.4byte gUnknown_08180494
_0812404C:
	.4byte 0x00000DF7
_08124050:
	.4byte 0x00000968
_08124054:
	.4byte gUnknown_020030A0
_08124058:
	.4byte gUnknown_020030B0
_0812405C:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08123F94

