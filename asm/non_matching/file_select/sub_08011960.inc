	THUMB_FUNC_START sub_08011960
sub_08011960: @ 0x08011960
	push {lr}
	add r2, r0, #0
	ldr r0, _08011988  @ =gUnknown_02016D60
	ldrb r1, [r0, #28]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08011974
	mov r0, #1
	strb r0, [r2, #20]
_08011974:
	ldr r0, _0801198C  @ =gUnknown_084275C8
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	pop {r0}
	bx r0
_08011988:
	.4byte gUnknown_02016D60
_0801198C:
	.4byte gUnknown_084275C8
	THUMB_FUNC_END sub_08011960

