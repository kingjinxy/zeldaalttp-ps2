	THUMB_FUNC_START sub_0806A474
sub_0806A474: @ 0x0806A474
	push {r4-r6,lr}
	sub sp, sp, #8
	ldr r4, _0806A59C  @ =gRam
	mov r0, #152
	lsl r0, r0, #4
	add r1, r4, r0
	mov r2, #0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _0806A5A0  @ =0x00001AD0
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _0806A5A4  @ =0x00000A4C
	add r0, r4, r3
	mov r1, #0
	strh r2, [r0]
	ldr r2, _0806A5A8  @ =0x0000188B
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0806A5AC  @ =0x00001759
	add r0, r4, r3
	strb r1, [r0]
	ldr r2, _0806A5B0  @ =0x0000175C
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #46
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #175
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0806A5B4  @ =0x00001895
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _0806A5B8  @ =0x007F007F
	str r0, [sp]
	ldr r1, _0806A5BC  @ =0x06008000
	ldr r2, _0806A5C0  @ =0x01000800
	mov r0, sp
	bl CpuFastSet
	ldr r0, _0806A5C4  @ =0xF0FCF0FC
	str r0, [sp, #4]
	add r0, sp, #4
	ldr r1, _0806A5C8  @ =gUnknown_02001600
	ldr r2, _0806A5CC  @ =0x01000080
	bl CpuFastSet
	ldr r0, _0806A5D0  @ =0x0000050C
	add r1, r4, r0
	mov r0, #136
	lsl r0, r0, #5
	strh r0, [r1]
	bl sub_0812EED8
	bl sub_0807499C
	bl sub_08092848
	bl sub_0812F250
	bl sub_0812FC84
	bl sub_08092D18
	bl sub_0812F9A8
	ldr r1, _0806A5D4  @ =0x00001656
	add r0, r4, r1
	mov r1, #70
	strb r1, [r0]
	ldr r2, _0806A5D8  @ =0x00001657
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0806A5DC  @ =0x00001658
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r1, [r0]
	mov r2, #199
	lsl r2, r2, #1
	ldr r3, _0806A5E0  @ =0x00000D02
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806A60C
	ldr r1, _0806A5E4  @ =0x00000A18
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806A536
	ldr r3, _0806A5E8  @ =0x00000B52
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806A60C
_0806A536:
	ldr r1, _0806A5EC  @ =0x0000165E
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #1
	bls _0806A60C
	ldr r3, _0806A5F0  @ =0x00001661
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #5
	beq _0806A60C
	cmp r1, #2
	bls _0806A55A
	ldr r1, _0806A5F4  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806A55A
	ldr r2, _0806A5F8  @ =0x0000018F
_0806A55A:
	ldr r4, _0806A59C  @ =gRam
	ldr r3, _0806A5FC  @ =0x00000954
	add r1, r4, r3
	mov r6, #0
	mov r0, #8
	strh r0, [r1]
	ldr r0, _0806A600  @ =0x0000095A
	add r1, r4, r0
	mov r5, #4
	mov r0, #4
	strh r0, [r1]
	add r0, r2, #0
	bl sub_080AF4FC
	bl sub_08079540
	mov r2, #152
	lsl r2, r2, #4
	add r1, r4, r2
	mov r0, #15
	strb r0, [r1]
	ldr r3, _0806A604  @ =0x000009B4
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _0806A608  @ =0x000009B5
	add r0, r4, r1
	strb r6, [r0]
	add r2, r2, #44
	add r4, r4, r2
	mov r0, #27
	strb r0, [r4]
	b _0806A626
	.byte 0x00
	.byte 0x00
_0806A59C:
	.4byte gRam
_0806A5A0:
	.4byte 0x00001AD0
_0806A5A4:
	.4byte 0x00000A4C
_0806A5A8:
	.4byte 0x0000188B
_0806A5AC:
	.4byte 0x00001759
_0806A5B0:
	.4byte 0x0000175C
_0806A5B4:
	.4byte 0x00001895
_0806A5B8:
	.4byte 0x007F007F
_0806A5BC:
	.4byte 0x06008000
_0806A5C0:
	.4byte 0x01000800
_0806A5C4:
	.4byte 0xF0FCF0FC
_0806A5C8:
	.4byte gUnknown_02001600
_0806A5CC:
	.4byte 0x01000080
_0806A5D0:
	.4byte 0x0000050C
_0806A5D4:
	.4byte 0x00001656
_0806A5D8:
	.4byte 0x00001657
_0806A5DC:
	.4byte 0x00001658
_0806A5E0:
	.4byte 0x00000D02
_0806A5E4:
	.4byte 0x00000A18
_0806A5E8:
	.4byte 0x00000B52
_0806A5EC:
	.4byte 0x0000165E
_0806A5F0:
	.4byte 0x00001661
_0806A5F4:
	.4byte 0x0000165C
_0806A5F8:
	.4byte 0x0000018F
_0806A5FC:
	.4byte 0x00000954
_0806A600:
	.4byte 0x0000095A
_0806A604:
	.4byte 0x000009B4
_0806A608:
	.4byte 0x000009B5
_0806A60C:
	ldr r0, _0806A630  @ =gRam
	ldr r3, _0806A634  @ =0x00000D02
	add r0, r0, r3
	mov r1, #0
	strh r1, [r0]
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	bl sub_080700F8
_0806A626:
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806A630:
	.4byte gRam
_0806A634:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0806A474

