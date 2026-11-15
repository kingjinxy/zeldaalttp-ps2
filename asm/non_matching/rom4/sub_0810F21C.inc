	THUMB_FUNC_START sub_0810F21C
sub_0810F21C: @ 0x0810F21C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #0
	mov r2, #13
	bl sub_0810E24C
	ldr r0, _0810F240  @ =gUnknown_020023F2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810F244
	add r0, r4, #0
	mov r1, #1
	mov r2, #18
	bl sub_0810E24C
	b _0810F24E
_0810F240:
	.4byte gUnknown_020023F2
_0810F244:
	add r0, r4, #0
	mov r1, #1
	mov r2, #16
	bl sub_0810E24C
_0810F24E:
	add r0, r4, #0
	mov r1, #2
	mov r2, #17
	bl sub_0810E24C
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F21C

	.byte 0x00
	.byte 0x00
