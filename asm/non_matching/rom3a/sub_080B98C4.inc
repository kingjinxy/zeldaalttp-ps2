	THUMB_FUNC_START sub_080B98C4
sub_080B98C4: @ 0x080B98C4
	push {r4-r7,lr}
	mov r0, #11
	ldr r5, _080B9968  @ =gUnknown_03003352
_080B98CA:
	lsl r0, r0, #24
	asr r4, r0, #24
	add r2, r4, r5
	ldr r1, _080B996C  @ =gUnknown_08170F5F
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	lsr r0, r0, #24
	ldr r1, _080B9970  @ =gUnknown_08170F47
	add r1, r4, r1
	ldrb r1, [r1]
	ldr r2, _080B9974  @ =gUnknown_08170F53
	add r2, r4, r2
	ldrb r2, [r2]
	bl sub_080BD874
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	asr r4, r4, #24
	cmp r4, #7
	bne _080B98CA
	ldr r6, _080B9978  @ =gRam
	ldr r1, _080B997C  @ =0x00000996
	add r7, r6, r1
_080B98FC:
	lsl r0, r0, #24
	asr r4, r0, #24
	ldr r1, _080B9980  @ =0x00001122
	add r5, r6, r1
	add r3, r4, r5
	ldrb r2, [r7]
	lsl r2, r2, #2
	mov r1, #64
	and r2, r2, r1
	ldr r1, _080B996C  @ =gUnknown_08170F5F
	add r1, r4, r1
	ldrb r1, [r1]
	orr r2, r2, r1
	strb r2, [r3]
	lsr r0, r0, #24
	ldr r1, _080B9970  @ =gUnknown_08170F47
	add r1, r4, r1
	ldrb r1, [r1]
	ldr r2, _080B9974  @ =gUnknown_08170F53
	add r2, r4, r2
	ldrb r2, [r2]
	bl sub_080BD874
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	asr r4, r4, #24
	cmp r4, #1
	bne _080B98FC
_080B9936:
	lsl r0, r0, #24
	asr r4, r0, #24
	add r2, r4, r5
	ldr r1, _080B996C  @ =gUnknown_08170F5F
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	lsr r0, r0, #24
	ldr r1, _080B9970  @ =gUnknown_08170F47
	add r1, r4, r1
	ldrb r1, [r1]
	ldr r2, _080B9974  @ =gUnknown_08170F53
	add r2, r4, r2
	ldrb r2, [r2]
	bl sub_080BD874
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	cmp r4, #0
	bge _080B9936
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B9968:
	.4byte gUnknown_03003352
_080B996C:
	.4byte gUnknown_08170F5F
_080B9970:
	.4byte gUnknown_08170F47
_080B9974:
	.4byte gUnknown_08170F53
_080B9978:
	.4byte gRam
_080B997C:
	.4byte 0x00000996
_080B9980:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080B98C4

