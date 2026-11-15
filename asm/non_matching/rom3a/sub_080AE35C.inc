	THUMB_FUNC_START sub_080AE35C
sub_080AE35C: @ 0x080AE35C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #9
	mov r1, #66
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	beq _080AE380
	b _080AE4E6
_080AE380:
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #11
	bl sub_080C19F8
	ldr r4, _080AE4F8  @ =gRam
	ldr r0, _080AE4FC  @ =gUnknown_0816E23C
	add r0, r0, #53
	ldrb r1, [r0]
	ldr r2, _080AE500  @ =0x00001732
	add r0, r4, r2
	strb r1, [r0]
	ldrb r0, [r0]
	bl sub_0812FBC4
	ldr r3, _080AE504  @ =0x00001791
	add r1, r4, r3
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080AE508  @ =0x00001792
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080AE50C  @ =0x000016D5
	add r0, r4, r2
	strb r5, [r0]
	sub r3, r3, #189
	add r4, r4, r3
	strb r5, [r4]
	mov r1, sp
	mov r0, #9
	strb r0, [r1]
	ldr r3, _080AE510  @ =gUnknown_020068EC
	mov r2, #0
_080AE3C2:
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r3
	strb r2, [r0]
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bgt _080AE3C2
	ldr r2, _080AE4F8  @ =gRam
	ldr r0, _080AE514  @ =gUnknown_0816E6BF
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r4, _080AE518  @ =0x0000097D
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080AE51C  @ =gUnknown_0816E6BB
	add r0, r6, r0
	ldrb r4, [r0]
	mov r1, sp
	mov r0, #9
	strb r0, [r1]
	ldr r0, _080AE520  @ =gUnknown_0816E6A7
	mov r10, r0
	ldr r1, _080AE524  @ =gUnknown_0816E6B1
	mov r9, r1
	mov r3, sp
	mov r0, #0
	mov r12, r0
	add r5, r2, #0
	mov r1, #150
	lsl r1, r1, #4
	add r7, r5, r1
	ldr r2, _080AE528  @ =0x00000964
	add r6, r5, r2
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r5
	mov r8, r0
_080AE412:
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r1, _080AE510  @ =gUnknown_020068EC
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldr r2, _080AE52C  @ =gUnknown_02006898
	add r1, r1, r2
	lsl r2, r4, #24
	asr r2, r2, #24
	ldr r4, _080AE530  @ =gUnknown_0816E69D
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldr r0, _080AE534  @ =gUnknown_02006880
	add r1, r1, r0
	mov r4, r10
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldr r0, _080AE538  @ =gUnknown_0200688C
	add r1, r1, r0
	mov r4, r9
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r1, _080AE53C  @ =gUnknown_020068D4
	add r0, r0, r1
	mov r4, r12
	strb r4, [r0]
	mov r0, #0
	ldrsb r0, [r3, r0]
	add r1, r1, #86
	add r0, r0, r1
	strb r4, [r0]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r4, _080AE540  @ =gUnknown_020068E0
	add r0, r0, r4
	mov r1, #16
	strb r1, [r0]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r1, _080AE544  @ =gUnknown_020068FA
	add r0, r0, r1
	mov r1, #53
	strb r1, [r0]
	mov r4, r8
	ldrh r0, [r4]
	sub r0, r0, #12
	strh r0, [r7]
	ldr r1, _080AE548  @ =0x000016C4
	add r0, r5, r1
	ldrh r0, [r0]
	add r0, r0, #4
	strh r0, [r6]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r4, _080AE54C  @ =gUnknown_020068A4
	add r0, r0, r4
	ldrb r1, [r7]
	strb r1, [r0]
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldr r0, _080AE550  @ =gUnknown_020068B0
	add r1, r1, r0
	ldr r4, _080AE554  @ =0x00000961
	add r0, r5, r4
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r1, _080AE558  @ =gUnknown_020068BC
	add r0, r0, r1
	ldrb r1, [r6]
	strb r1, [r0]
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldr r4, _080AE55C  @ =gUnknown_020068C8
	add r1, r1, r4
	ldr r4, _080AE560  @ =0x00000965
	add r0, r5, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	sub r2, r2, #1
	lsl r2, r2, #24
	ldr r1, _080AE518  @ =0x0000097D
	add r0, r5, r1
	lsr r4, r2, #24
	asr r2, r2, #24
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r2, r0
	bne _080AE412
_080AE4E6:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE4F8:
	.4byte gRam
_080AE4FC:
	.4byte gUnknown_0816E23C
_080AE500:
	.4byte 0x00001732
_080AE504:
	.4byte 0x00001791
_080AE508:
	.4byte 0x00001792
_080AE50C:
	.4byte 0x000016D5
_080AE510:
	.4byte gUnknown_020068EC
_080AE514:
	.4byte gUnknown_0816E6BF
_080AE518:
	.4byte 0x0000097D
_080AE51C:
	.4byte gUnknown_0816E6BB
_080AE520:
	.4byte gUnknown_0816E6A7
_080AE524:
	.4byte gUnknown_0816E6B1
_080AE528:
	.4byte 0x00000964
_080AE52C:
	.4byte gUnknown_02006898
_080AE530:
	.4byte gUnknown_0816E69D
_080AE534:
	.4byte gUnknown_02006880
_080AE538:
	.4byte gUnknown_0200688C
_080AE53C:
	.4byte gUnknown_020068D4
_080AE540:
	.4byte gUnknown_020068E0
_080AE544:
	.4byte gUnknown_020068FA
_080AE548:
	.4byte 0x000016C4
_080AE54C:
	.4byte gUnknown_020068A4
_080AE550:
	.4byte gUnknown_020068B0
_080AE554:
	.4byte 0x00000961
_080AE558:
	.4byte gUnknown_020068BC
_080AE55C:
	.4byte gUnknown_020068C8
_080AE560:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080AE35C

