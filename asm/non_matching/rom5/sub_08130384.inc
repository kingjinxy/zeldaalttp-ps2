	THUMB_FUNC_START sub_08130384
sub_08130384: @ 0x08130384
	push {r4-r7,lr}
	ldr r1, _081303F8  @ =gUnknown_0822BC0C
	ldr r0, _081303FC  @ =gRam
	ldr r2, _08130400  @ =0x00000CAA
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r1, _08130404  @ =gUnknown_02030610
	add r2, r0, r1
	mov r0, #0
	ldr r7, _08130408  @ =gUnknown_083BF758
	ldr r6, _0813040C  @ =gUnknown_02000800
	mov r4, #0
_081303A4:
	add r5, r0, #1
	mov r3, #3
	add r1, r4, r6
_081303AA:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r4, r4, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081303AA
	add r2, r2, #24
	add r0, r5, #0
	cmp r0, #7
	ble _081303A4
	add r5, r7, #0
	ldr r6, _08130410  @ =gUnknown_02000900
	mov r4, #127
_081303C8:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _081303C8
	ldr r5, _08130414  @ =gUnknown_083BF858
	ldr r6, _08130418  @ =gUnknown_02000B00
	mov r4, #127
_081303E0:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _081303E0
	pop {r4-r7}
	pop {r0}
	bx r0
_081303F8:
	.4byte gUnknown_0822BC0C
_081303FC:
	.4byte gRam
_08130400:
	.4byte 0x00000CAA
_08130404:
	.4byte gUnknown_02030610
_08130408:
	.4byte gUnknown_083BF758
_0813040C:
	.4byte gUnknown_02000800
_08130410:
	.4byte gUnknown_02000900
_08130414:
	.4byte gUnknown_083BF858
_08130418:
	.4byte gUnknown_02000B00
	THUMB_FUNC_END sub_08130384

