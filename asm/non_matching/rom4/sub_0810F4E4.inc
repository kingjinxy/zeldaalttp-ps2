	THUMB_FUNC_START sub_0810F4E4
sub_0810F4E4: @ 0x0810F4E4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _0810F504  @ =gRam
	ldr r1, _0810F508  @ =0x00000B6C
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810F50C
	mov r1, #193
	lsl r1, r1, #1
	add r0, r2, #0
	mov r2, #0
	bl sub_080C9164
	b _0810F518
_0810F504:
	.4byte gRam
_0810F508:
	.4byte 0x00000B6C
_0810F50C:
	mov r1, #179
	lsl r1, r1, #1
	add r0, r2, #0
	mov r2, #0
	bl sub_080C9164
_0810F518:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F4E4

