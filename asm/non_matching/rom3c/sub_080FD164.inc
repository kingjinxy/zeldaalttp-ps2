	THUMB_FUNC_START sub_080FD164
sub_080FD164: @ 0x080FD164
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080FD194  @ =gRam
	ldr r2, _080FD198  @ =0x00000F82
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, #7
	ldr r2, _080FD19C  @ =0x000015F9
	add r1, r1, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080FC5AC
	add r0, r4, #0
	mov r1, #109
	bl sub_080CF0AC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD194:
	.4byte gRam
_080FD198:
	.4byte 0x00000F82
_080FD19C:
	.4byte 0x000015F9
	THUMB_FUNC_END sub_080FD164

