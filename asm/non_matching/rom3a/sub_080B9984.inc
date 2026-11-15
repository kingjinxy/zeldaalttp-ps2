	THUMB_FUNC_START sub_080B9984
sub_080B9984: @ 0x080B9984
	push {r4,r5,lr}
	mov r5, #0
	mov r0, #0
	mov r1, #12
	mov r2, #3
	bl sub_080BD874
	ldr r4, _080B99F0  @ =gRam
	ldr r0, _080B99F4  @ =0x00001122
	add r1, r4, r0
	mov r0, #48
	strb r0, [r1]
	ldr r1, _080B99F8  @ =0x00001012
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _080B99FC  @ =0x00001032
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
	mov r0, #4
	bl sub_080CF370
	mov r0, #0
	bl sub_080C6230
	mov r5, #1
	ldr r0, _080B9A00  @ =0x00000FF3
	add r1, r4, r0
	mov r0, #115
	strb r0, [r1]
	ldr r0, _080B9A04  @ =0x00001123
	add r1, r4, r0
	mov r0, #39
	strb r0, [r1]
	ldr r0, _080B9A08  @ =0x00001063
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	mov r0, #16
	bl sub_080CF370
	ldr r1, _080B9A0C  @ =0x000015DC
	add r4, r4, r1
	strb r5, [r4]
	mov r0, #1
	bl sub_080C1F70
	mov r0, #1
	bl SpriteActive_MainLong
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B99F0:
	.4byte gRam
_080B99F4:
	.4byte 0x00001122
_080B99F8:
	.4byte 0x00001012
_080B99FC:
	.4byte 0x00001032
_080B9A00:
	.4byte 0x00000FF3
_080B9A04:
	.4byte 0x00001123
_080B9A08:
	.4byte 0x00001063
_080B9A0C:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080B9984

