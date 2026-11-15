	THUMB_FUNC_START sub_080BA6DC
sub_080BA6DC: @ 0x080BA6DC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r4, #6
	ldr r1, _080BA71C  @ =gRam
	ldr r0, _080BA720  @ =0x00000F98
	add r3, r1, r0
	ldr r2, _080BA724  @ =0x00000996
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	strb r0, [r3]
	add r3, r1, #0
	cmp r0, #0
	bne _080BA77E
	ldr r1, _080BA728  @ =0x00000EE8
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080BA730
	ldr r2, _080BA72C  @ =0x00000F28
	add r1, r3, r2
	ldrb r0, [r1]
	add r0, r0, #1
	b _080BA738
	.byte 0x00
	.byte 0x00
_080BA71C:
	.4byte gRam
_080BA720:
	.4byte 0x00000F98
_080BA724:
	.4byte 0x00000996
_080BA728:
	.4byte 0x00000EE8
_080BA72C:
	.4byte 0x00000F28
_080BA730:
	ldr r0, _080BA758  @ =0x00000F28
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #255
_080BA738:
	strb r0, [r1]
	lsl r0, r4, #24
	asr r2, r0, #24
	ldr r1, _080BA75C  @ =0x00000ED2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #175
	bhi _080BA764
	ldr r0, _080BA760  @ =0x00000F12
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	b _080BA76E
	.byte 0x00
	.byte 0x00
_080BA758:
	.4byte 0x00000F28
_080BA75C:
	.4byte 0x00000ED2
_080BA760:
	.4byte 0x00000F12
_080BA764:
	ldr r0, _080BA8E8  @ =0x00000F12
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #255
_080BA76E:
	strb r0, [r1]
	ldr r0, _080BA8EC  @ =gRam
	ldr r1, _080BA8F0  @ =0x000015DC
	add r0, r0, r1
	strb r4, [r0]
	add r0, r4, #0
	bl sub_080CA58C
_080BA77E:
	lsl r5, r4, #24
	asr r4, r5, #24
	ldr r2, _080BA8EC  @ =gRam
	ldr r3, _080BA8F4  @ =0x00001122
	add r2, r2, r3
	mov r10, r2
	add r2, r4, r2
	ldr r1, _080BA8EC  @ =gRam
	ldr r3, _080BA8F8  @ =0x00000F22
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #64
	and r0, r0, r1
	mov r1, #126
	eor r0, r0, r1
	strb r0, [r2]
	ldr r0, _080BA8EC  @ =gRam
	ldr r1, _080BA8FC  @ =0x00001012
	add r0, r0, r1
	mov r8, r0
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r2, _080BA900  @ =gUnknown_03003262
	add r1, r4, r2
	mov r0, #48
	strb r0, [r1]
	ldr r3, _080BA8EC  @ =gRam
	ldr r1, _080BA904  @ =0x00001142
	add r0, r3, r1
	add r0, r4, r0
	mov r7, #16
	strb r7, [r0]
	lsr r5, r5, #24
	mov r0, #8
	bl sub_080CF370
	ldr r2, _080BA908  @ =gUnknown_0300380C
	strb r5, [r2]
	add r0, r5, #0
	bl sub_080C1F70
	add r0, r5, #0
	bl SpriteActive_MainLong
	sub r4, r4, #1
	lsl r4, r4, #24
	asr r6, r4, #24
	add r10, r10, r6
	mov r0, #55
	mov r3, r10
	strb r0, [r3]
	lsr r4, r4, #24
	mov r0, #2
	add r8, r8, r4
	mov r1, r8
	strb r0, [r1]
	ldr r2, _080BA900  @ =gUnknown_03003262
	add r0, r4, r2
	strb r7, [r0]
	ldr r3, _080BA908  @ =gUnknown_0300380C
	strb r4, [r3]
	mov r0, #12
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	ldr r0, _080BA8EC  @ =gRam
	ldr r1, _080BA90C  @ =0x000009AD
	add r5, r0, r1
	ldrb r2, [r5]
	mov r10, r2
	mov r3, #0
	strb r3, [r5]
	ldr r1, _080BA910  @ =0x00000FA2
	add r0, r0, r1
	mov r8, r0
	add r0, r4, r0
	mov r2, #9
	mov r9, r2
	mov r3, r9
	strb r3, [r0]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r10
	strb r0, [r5]
	ldr r1, _080BA8EC  @ =gRam
	ldr r2, _080BA914  @ =0x0000164C
	add r7, r1, r2
	ldrb r3, [r7]
	str r3, [sp]
	mov r0, #0
	strb r0, [r7]
	sub r6, r6, #1
	lsl r6, r6, #24
	lsr r4, r6, #24
	ldr r1, _080BA908  @ =gUnknown_0300380C
	strb r4, [r1]
	mov r0, #8
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	ldrb r2, [r5]
	mov r10, r2
	mov r3, #0
	strb r3, [r5]
	mov r1, r8
	add r0, r4, r1
	mov r2, r9
	strb r2, [r0]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r3, r10
	strb r3, [r5]
	mov r0, #255
	lsl r0, r0, #24
	add r6, r6, r0
	lsr r4, r6, #24
	ldr r1, _080BA908  @ =gUnknown_0300380C
	strb r4, [r1]
	mov r0, #8
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	ldrb r2, [r5]
	mov r10, r2
	mov r3, #0
	strb r3, [r5]
	add r8, r8, r4
	mov r1, r9
	mov r0, r8
	strb r1, [r0]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r2, r10
	strb r2, [r5]
	mov r3, sp
	ldrb r3, [r3]
	strb r3, [r7]
	mov r0, #255
	lsl r0, r0, #24
	add r6, r6, r0
	lsr r4, r6, #24
	ldr r1, _080BA8EC  @ =gRam
	mov r9, r1
	ldr r2, _080BA918  @ =0x00000996
	add r2, r2, r9
	mov r10, r2
	ldr r3, _080BA91C  @ =0x00000F92
	add r3, r3, r9
	mov r8, r3
_080BA8C0:
	lsl r4, r4, #24
	lsr r6, r4, #24
	asr r5, r4, #24
	lsl r1, r5, #25
	lsr r1, r1, #24
	ldr r0, _080BA920  @ =gUnknown_08170FFB
	add r0, r5, r0
	ldrb r2, [r0]
	add r0, r6, #0
	bl sub_080BD874
	add r7, r4, #0
	cmp r5, #0
	bne _080BA924
	add r0, r6, #0
	mov r1, #48
	bl sub_080B9154
	b _080BA998
	.byte 0x00
	.byte 0x00
_080BA8E8:
	.4byte 0x00000F12
_080BA8EC:
	.4byte gRam
_080BA8F0:
	.4byte 0x000015DC
_080BA8F4:
	.4byte 0x00001122
_080BA8F8:
	.4byte 0x00000F22
_080BA8FC:
	.4byte 0x00001012
_080BA900:
	.4byte gUnknown_03003262
_080BA904:
	.4byte 0x00001142
_080BA908:
	.4byte gUnknown_0300380C
_080BA90C:
	.4byte 0x000009AD
_080BA910:
	.4byte 0x00000FA2
_080BA914:
	.4byte 0x0000164C
_080BA918:
	.4byte 0x00000996
_080BA91C:
	.4byte 0x00000F92
_080BA920:
	.4byte gUnknown_08170FFB
_080BA924:
	asr r3, r7, #25
	cmp r3, #0
	beq _080BA93C
	mov r1, r8
	add r0, r5, r1
	mov r2, r10
	ldrb r1, [r2]
	lsr r1, r1, #3
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	b _080BA998
_080BA93C:
	ldr r1, _080BA954  @ =gRam
	mov r2, r10
	ldrb r0, [r2]
	mov r2, #31
	and r2, r2, r0
	cmp r2, #14
	bls _080BA958
	mov r1, r8
	add r0, r5, r1
	strb r3, [r0]
	b _080BA96E
	.byte 0x00
	.byte 0x00
_080BA954:
	.4byte gRam
_080BA958:
	ldr r3, _080BA9B4  @ =0x00001142
	add r1, r1, r3
	add r1, r5, r1
	ldr r0, _080BA9B8  @ =gUnknown_08170FFE
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r8
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
_080BA96E:
	lsr r4, r7, #24
	ldr r1, _080BA9BC  @ =0x00001122
	add r1, r1, r9
	add r1, r4, r1
	mov r2, #0
	mov r0, #48
	strb r0, [r1]
	ldr r0, _080BA9C0  @ =0x00001012
	add r0, r0, r9
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080BA9C4  @ =gUnknown_03003262
	add r1, r4, r2
	mov r0, #16
	strb r0, [r1]
	mov r0, #4
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C6230
_080BA998:
	mov r3, #255
	lsl r3, r3, #24
	add r0, r7, r3
	lsr r4, r0, #24
	cmp r0, #0
	bge _080BA8C0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BA9B4:
	.4byte 0x00001142
_080BA9B8:
	.4byte gUnknown_08170FFE
_080BA9BC:
	.4byte 0x00001122
_080BA9C0:
	.4byte 0x00001012
_080BA9C4:
	.4byte gUnknown_03003262
	THUMB_FUNC_END sub_080BA6DC

