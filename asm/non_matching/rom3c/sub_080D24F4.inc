	THUMB_FUNC_START sub_080D24F4
sub_080D24F4: @ 0x080D24F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D25A4  @ =gRam
	ldr r2, _080D25A8  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r6, r3, r4
	strb r1, [r6]
	add r2, r2, #32
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r4, r4, #1
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080D25AC  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r2, _080D25B0  @ =0x00000964
	add r4, r3, r2
	strb r1, [r4]
	ldr r2, _080D25B4  @ =0x00000EF2
	add r1, r3, r2
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _080D25B8  @ =0x00000965
	add r0, r3, r2
	strb r1, [r0]
	ldrh r0, [r4]
	add r5, r0, #0
	sub r5, r5, #16
	strh r5, [r4]
	ldr r1, _080D25BC  @ =0x000016C4
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080D25C0  @ =0x000016C5
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r6]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	cmp r1, #0
	bge _080D2564
	mvn r0, r2
	lsl r0, r0, #16
	lsr r2, r0, #16
_080D2564:
	strh r2, [r6]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080D25C4  @ =0x000016C1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, r5
	lsl r1, r1, #16
	lsr r2, r1, #16
	cmp r1, #0
	bge _080D258C
	mvn r0, r2
	lsl r0, r0, #16
	lsr r2, r0, #16
_080D258C:
	strh r2, [r4]
	ldrh r0, [r6]
	cmp r0, #47
	bhi _080D259A
	mov r0, #0
	cmp r2, #47
	bls _080D259C
_080D259A:
	mov r0, #1
_080D259C:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080D25A4:
	.4byte gRam
_080D25A8:
	.4byte 0x00000EE2
_080D25AC:
	.4byte 0x00000ED2
_080D25B0:
	.4byte 0x00000964
_080D25B4:
	.4byte 0x00000EF2
_080D25B8:
	.4byte 0x00000965
_080D25BC:
	.4byte 0x000016C4
_080D25C0:
	.4byte 0x000016C5
_080D25C4:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_080D24F4

