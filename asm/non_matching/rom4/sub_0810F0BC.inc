	THUMB_FUNC_START sub_0810F0BC
sub_0810F0BC: @ 0x0810F0BC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _0810F0DC  @ =0x00000169
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	pop {r4}
	pop {r0}
	bx r0
_0810F0DC:
	.4byte 0x00000169
	THUMB_FUNC_END sub_0810F0BC

