	THUMB_FUNC_START sub_080B9584
sub_080B9584: @ 0x080B9584
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	ldr r4, _080B9648  @ =gRam
	ldr r2, _080B964C  @ =0x00000B36
	add r1, r4, r2
	ldrh r3, [r1]
	lsr r1, r3, #3
	mov r2, #254
	and r1, r1, r2
	ldr r2, _080B9650  @ =0x000015F5
	add r5, r4, r2
	strb r1, [r5]
	mov r1, #15
	and r1, r1, r3
	lsl r1, r1, #1
	sub r2, r2, #1
	add r3, r4, r2
	strb r1, [r3]
	ldr r1, _080B9654  @ =gUnknown_08170DEC
	lsr r0, r0, #25
	lsl r2, r0, #2
	add r1, r2, r1
	ldr r1, [r1]
	mov r12, r1
	ldr r1, _080B9658  @ =gUnknown_08170E84
	add r2, r2, r1
	ldr r7, [r2]
	ldr r1, _080B965C  @ =gUnknown_08170F1C
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _080B9660  @ =0x00000964
	add r6, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r5, r4, r2
	mov r10, r3
	ldr r0, _080B9664  @ =0x00000EE2
	add r0, r0, r4
	mov r9, r0
	ldr r2, _080B9668  @ =0x00000F02
	add r2, r2, r4
	mov r8, r2
_080B95E0:
	ldr r2, _080B966C  @ =gUnknown_03003825
	ldrb r0, [r2]
	lsl r3, r1, #24
	asr r3, r3, #24
	lsl r2, r3, #1
	add r1, r2, r7
	lsl r0, r0, #8
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r6]
	mov r1, r10
	ldrb r0, [r1]
	add r2, r2, r12
	lsl r0, r0, #8
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r5]
	mov r2, r9
	add r1, r3, r2
	ldrb r0, [r5]
	strb r0, [r1]
	mov r0, r8
	add r1, r3, r0
	ldr r2, _080B9670  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080B9674  @ =0x00000ED2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r6]
	strb r1, [r0]
	ldr r2, _080B9678  @ =0x00000EF2
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080B967C  @ =0x00000965
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	sub r3, r3, #1
	lsl r3, r3, #24
	lsr r1, r3, #24
	cmp r3, #0
	bge _080B95E0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B9648:
	.4byte gRam
_080B964C:
	.4byte 0x00000B36
_080B9650:
	.4byte 0x000015F5
_080B9654:
	.4byte gUnknown_08170DEC
_080B9658:
	.4byte gUnknown_08170E84
_080B965C:
	.4byte gUnknown_08170F1C
_080B9660:
	.4byte 0x00000964
_080B9664:
	.4byte 0x00000EE2
_080B9668:
	.4byte 0x00000F02
_080B966C:
	.4byte gUnknown_03003825
_080B9670:
	.4byte 0x00000961
_080B9674:
	.4byte 0x00000ED2
_080B9678:
	.4byte 0x00000EF2
_080B967C:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080B9584

