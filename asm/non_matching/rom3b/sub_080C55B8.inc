	THUMB_FUNC_START sub_080C55B8
sub_080C55B8: @ 0x080C55B8
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	mov r8, r0
	lsl r4, r1, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #48
	bl sub_080C4378
	ldr r5, _080C5604  @ =gRam
	ldr r0, _080C5608  @ =0x000016F9
	add r1, r5, r0
	mov r6, #0
	mov r0, #144
	strb r0, [r1]
	ldr r0, _080C560C  @ =0x000016F8
	add r1, r5, r0
	mov r0, #16
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
	ldr r0, _080C5610  @ =0x00000FD2
	add r5, r5, r0
	add r4, r4, r5
	mov r0, #48
	strb r0, [r4]
	mov r0, r8
	strb r6, [r0]
	mov r0, #1
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C5604:
	.4byte gRam
_080C5608:
	.4byte 0x000016F9
_080C560C:
	.4byte 0x000016F8
_080C5610:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080C55B8

