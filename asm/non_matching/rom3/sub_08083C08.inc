	THUMB_FUNC_START sub_08083C08
sub_08083C08: @ 0x08083C08
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	ldr r2, _08083D20  @ =gRam
	ldr r0, _08083D24  @ =0x00000AA8
	add r3, r2, r0
	ldr r0, _08083D28  @ =gUnknown_081676F2
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r3]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r3]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r2, r1
	strh r7, [r0]
	lsl r0, r7, #16
	asr r4, r0, #16
	ldr r3, _08083D2C  @ =0x0000097C
	add r2, r2, r3
	mov r0, #4
	strh r0, [r2]
	ldr r6, _08083D30  @ =gUnknown_02018000
	mov r8, r2
	ldr r5, _08083D34  @ =gUnknown_081659E4
_08083C3E:
	add r0, r4, #0
	bl sub_08080380
	asr r3, r0, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r1, [r5]
	strh r1, [r0]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	asr r3, r0, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r1, [r5, #2]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r4, r1
	bl sub_08080380
	asr r3, r0, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r1, [r5, #4]
	strh r1, [r0]
	add r5, r5, #6
	add r4, r4, #2
	mov r2, r8
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08083C3E
	bl sub_08089F74
	ldr r1, _08083D20  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r2, r1, r3
	lsl r0, r7, #16
	asr r3, r0, #17
	add r0, r7, #2
	strh r0, [r2]
	ldrb r2, [r2]
	ldr r4, _08083D38  @ =0x00001732
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _08083D3C  @ =0x00000971
	add r0, r1, r2
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	strb r2, [r0]
	ldr r0, _08083D2C  @ =0x0000097C
	add r1, r1, r0
	mov r0, #4
	strh r0, [r1]
	ldr r6, _08083D40  @ =gUnknown_0200CBA0
	mov r2, #39
	ldr r5, _08083D44  @ =gUnknown_0200CBE0
	ldr r4, _08083D48  @ =gUnknown_0200CC20
_08083CBE:
	add r0, r3, r6
	strb r2, [r0]
	add r0, r3, r5
	strb r2, [r0]
	add r0, r3, r4
	strb r2, [r0]
	add r3, r3, #1
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08083CBE
	bl sub_08070064
	ldr r4, _08083D20  @ =gRam
	ldr r1, _08083D4C  @ =0x000016C4
	add r0, r4, r1
	ldr r2, _08083D50  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08083D54  @ =0x00000504
	add r1, r4, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldr r3, _08083D58  @ =0x00000958
	add r2, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08083D5C  @ =0x00000506
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #16
	bl sub_0812A324
	ldr r0, _08083D60  @ =0x00000DBA
	add r4, r4, r0
	mov r0, #1
	strb r0, [r4]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08083D20:
	.4byte gRam
_08083D24:
	.4byte 0x00000AA8
_08083D28:
	.4byte gUnknown_081676F2
_08083D2C:
	.4byte 0x0000097C
_08083D30:
	.4byte gUnknown_02018000
_08083D34:
	.4byte gUnknown_081659E4
_08083D38:
	.4byte 0x00001732
_08083D3C:
	.4byte 0x00000971
_08083D40:
	.4byte gUnknown_0200CBA0
_08083D44:
	.4byte gUnknown_0200CBE0
_08083D48:
	.4byte gUnknown_0200CC20
_08083D4C:
	.4byte 0x000016C4
_08083D50:
	.4byte 0x00000952
_08083D54:
	.4byte 0x00000504
_08083D58:
	.4byte 0x00000958
_08083D5C:
	.4byte 0x00000506
_08083D60:
	.4byte 0x00000DBA
	THUMB_FUNC_END sub_08083C08

