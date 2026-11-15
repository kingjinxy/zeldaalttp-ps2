	THUMB_FUNC_START sub_080AEF4C
sub_080AEF4C: @ 0x080AEF4C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080AEFC4  @ =gRam
	ldr r1, _080AEFC8  @ =0x00000E15
	add r0, r2, r1
	add r0, r6, r0
	mov r3, #0
	mov r1, #60
	strb r1, [r0]
	ldr r4, _080AEFCC  @ =0x00000E29
	add r0, r2, r4
	add r0, r6, r0
	strb r3, [r0]
	ldr r5, _080AEFD0  @ =0x00000E33
	add r0, r2, r5
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080AEFD4  @ =0x00000E47
	add r0, r2, r1
	add r0, r6, r0
	mov r4, #161
	lsl r4, r4, #4
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r5, _080AEFD8  @ =0x00001734
	add r0, r2, r5
	strb r3, [r0]
	ldr r1, _080AEFDC  @ =0x00001735
	add r0, r2, r1
	strb r3, [r0]
	ldr r3, _080AEFE0  @ =0x000016D5
	add r0, r2, r3
	ldrb r0, [r0]
	lsr r4, r0, #1
	add r5, r5, #5
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r1, r0, #24
	lsr r3, r0, #26
	add r7, r2, #0
	cmp r1, #63
	bls _080AEFAE
	mov r3, #16
_080AEFAE:
	ldr r0, _080AEFE4  @ =gUnknown_0816E860
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080AEFF2
	add r0, r7, #0
	cmp r4, #0
	bne _080AEFE8
	neg r1, r3
	b _080AEFEA
	.byte 0x00
	.byte 0x00
_080AEFC4:
	.4byte gRam
_080AEFC8:
	.4byte 0x00000E15
_080AEFCC:
	.4byte 0x00000E29
_080AEFD0:
	.4byte 0x00000E33
_080AEFD4:
	.4byte 0x00000E47
_080AEFD8:
	.4byte 0x00001734
_080AEFDC:
	.4byte 0x00001735
_080AEFE0:
	.4byte 0x000016D5
_080AEFE4:
	.4byte gUnknown_0816E860
_080AEFE8:
	add r1, r3, #0
_080AEFEA:
	ldr r2, _080AF00C  @ =0x00001734
	add r0, r0, r2
	strb r1, [r0]
	mov r1, #0
_080AEFF2:
	ldr r5, _080AF010  @ =0x00001732
	add r0, r7, r5
	strb r1, [r0]
	ldr r0, _080AF014  @ =gUnknown_0816E864
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080AF022
	add r0, r7, #0
	cmp r4, #2
	bne _080AF018
	neg r1, r3
	b _080AF01A
_080AF00C:
	.4byte 0x00001734
_080AF010:
	.4byte 0x00001732
_080AF014:
	.4byte gUnknown_0816E864
_080AF018:
	add r1, r3, #0
_080AF01A:
	ldr r2, _080AF124  @ =0x00001735
	add r0, r0, r2
	strb r1, [r0]
	mov r1, #0
_080AF022:
	ldr r3, _080AF128  @ =0x00001733
	add r4, r7, r3
	mov r5, #0
	strb r1, [r4]
	bl GetRandomInt
	mov r1, #151
	lsl r1, r1, #4
	add r2, r7, r1
	strb r0, [r2]
	ldr r3, _080AF12C  @ =0x00001732
	add r1, r7, r3
	ldrb r1, [r1]
	and r1, r1, r0
	ldr r0, _080AF130  @ =0x00000968
	add r0, r0, r7
	mov r12, r0
	strb r1, [r0]
	ldr r1, _080AF134  @ =0x00000969
	add r0, r7, r1
	strb r5, [r0]
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldrb r1, [r4]
	and r0, r0, r1
	asr r0, r0, #4
	ldr r2, _080AF138  @ =0x0000096C
	add r2, r2, r7
	mov r8, r2
	strb r0, [r2]
	ldr r3, _080AF13C  @ =0x0000096D
	add r0, r7, r3
	strb r5, [r0]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r7, r4
	ldrb r0, [r0]
	ldr r5, _080AF140  @ =0x000016C1
	add r1, r7, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	ldr r3, _080AF144  @ =0x00001734
	add r2, r7, r3
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	orr r0, r0, r1
	add r0, r0, r2
	ldr r2, _080AF148  @ =gUnknown_0816E850
	add r4, r4, #21
	add r1, r7, r4
	ldrb r3, [r1]
	lsr r3, r3, #1
	lsl r3, r3, #1
	add r2, r3, r2
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r5, r12
	ldrh r5, [r5]
	add r0, r0, r5
	mov r1, #150
	lsl r1, r1, #4
	add r4, r7, r1
	strh r0, [r4]
	ldr r2, _080AF14C  @ =0x000016C4
	add r0, r7, r2
	ldrb r0, [r0]
	ldr r5, _080AF150  @ =0x000016C5
	add r1, r7, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	add r5, r5, #112
	add r2, r7, r5
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	orr r0, r0, r1
	add r0, r0, r2
	ldr r1, _080AF154  @ =gUnknown_0816E858
	add r3, r3, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r3, [r3]
	add r0, r0, r3
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r1, r8
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _080AF158  @ =0x00000964
	add r2, r7, r3
	strh r0, [r2]
	ldr r5, _080AF15C  @ =0x00000DC5
	add r0, r7, r5
	add r0, r6, r0
	ldrb r1, [r4]
	strb r1, [r0]
	ldr r1, _080AF160  @ =0x00000DD9
	add r0, r7, r1
	add r0, r6, r0
	sub r3, r3, #3
	add r1, r7, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r4, _080AF164  @ =0x00000DCF
	add r0, r7, r4
	add r0, r6, r0
	ldrb r1, [r2]
	strb r1, [r0]
	add r5, r5, #30
	add r0, r7, r5
	add r0, r6, r0
	ldr r2, _080AF168  @ =0x00000965
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080AF124:
	.4byte 0x00001735
_080AF128:
	.4byte 0x00001733
_080AF12C:
	.4byte 0x00001732
_080AF130:
	.4byte 0x00000968
_080AF134:
	.4byte 0x00000969
_080AF138:
	.4byte 0x0000096C
_080AF13C:
	.4byte 0x0000096D
_080AF140:
	.4byte 0x000016C1
_080AF144:
	.4byte 0x00001734
_080AF148:
	.4byte gUnknown_0816E850
_080AF14C:
	.4byte 0x000016C4
_080AF150:
	.4byte 0x000016C5
_080AF154:
	.4byte gUnknown_0816E858
_080AF158:
	.4byte 0x00000964
_080AF15C:
	.4byte 0x00000DC5
_080AF160:
	.4byte 0x00000DD9
_080AF164:
	.4byte 0x00000DCF
_080AF168:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080AEF4C

