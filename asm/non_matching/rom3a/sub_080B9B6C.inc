	THUMB_FUNC_START sub_080B9B6C
sub_080B9B6C: @ 0x080B9B6C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r7, #0
	ldr r6, _080B9BF4  @ =gRam
	ldr r0, _080B9BF8  @ =0x000015DC
	add r0, r0, r6
	mov r8, r0
_080B9B7C:
	lsl r4, r7, #24
	asr r3, r4, #24
	cmp r3, #1
	bgt _080B9C1C
	ldr r1, _080B9BFC  @ =0x00000FF2
	add r0, r6, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080B9C00  @ =0x00001122
	add r0, r6, r2
	add r0, r3, r0
	mov r1, #11
	strb r1, [r0]
	lsr r4, r4, #24
	mov r1, #2
	ldr r2, _080B9C04  @ =0x00001012
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080B9C08  @ =0x00001032
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _080B9C0C  @ =0x00001142
	add r0, r6, r2
	add r0, r3, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080B9C10  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, r3
	asr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B9C14  @ =0x00000F92
	add r2, r6, r1
	add r2, r3, r2
	ldr r1, _080B9C18  @ =gUnknown_08170F7D
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080B925C
	mov r0, #12
	bl sub_080CF370
	mov r2, r8
	strb r4, [r2]
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl SpriteActive_MainLong
	b _080B9C34
	.byte 0x00
	.byte 0x00
_080B9BF4:
	.4byte gRam
_080B9BF8:
	.4byte 0x000015DC
_080B9BFC:
	.4byte 0x00000FF2
_080B9C00:
	.4byte 0x00001122
_080B9C04:
	.4byte 0x00001012
_080B9C08:
	.4byte 0x00001032
_080B9C0C:
	.4byte 0x00001142
_080B9C10:
	.4byte 0x00000996
_080B9C14:
	.4byte 0x00000F92
_080B9C18:
	.4byte gUnknown_08170F7D
_080B9C1C:
	lsr r4, r4, #24
	mov r0, #16
	bl sub_080CF370
	mov r0, r8
	strb r4, [r0]
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl SpriteActive_MainLong
_080B9C34:
	lsl r0, r7, #24
	mov r1, #128
	lsl r1, r1, #17
	add r0, r0, r1
	lsr r7, r0, #24
	lsl r4, r7, #24
	asr r5, r4, #24
	cmp r5, #4
	ble _080B9B7C
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #56
	mov r2, #2
	bl sub_080BD874
	add r0, r4, #0
	mov r1, #48
	bl sub_080B9154
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #58
	mov r2, #3
	bl sub_080BD874
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B9B6C

	.byte 0x00
	.byte 0x00
