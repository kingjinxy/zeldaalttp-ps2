	THUMB_FUNC_START sub_0804D854
sub_0804D854: @ 0x0804D854
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #22
	bls _0804D884
	ldr r0, _0804D880  @ =gUnknown_08428908
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	sub r1, r1, #23
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	b _0804D898
	.byte 0x00
	.byte 0x00
_0804D880:
	.4byte gUnknown_08428908
_0804D884:
	ldr r0, _0804D8A0  @ =gUnknown_08428900
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_0804D898:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804D8A0:
	.4byte gUnknown_08428900
	THUMB_FUNC_END sub_0804D854

