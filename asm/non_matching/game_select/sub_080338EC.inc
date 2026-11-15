	THUMB_FUNC_START sub_080338EC
sub_080338EC: @ 0x080338EC
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _0803393C  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08033936
	mov r0, #88
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08033936
	add r0, r4, #0
	bl sub_0803D3D0
	mov r0, #2
	mov r1, #4
	bl sub_0800C0B0
	mov r0, #134
	lsl r0, r0, #2
	bl play_sound
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	ldrb r1, [r4, #28]
	sub r0, r0, #64
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
_08033936:
	pop {r4}
	pop {r0}
	bx r0
_0803393C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080338EC

