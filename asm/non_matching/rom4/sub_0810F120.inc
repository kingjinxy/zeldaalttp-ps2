	THUMB_FUNC_START sub_0810F120
sub_0810F120: @ 0x0810F120
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #0
	mov r2, #8
	bl sub_0810E24C
	ldr r0, _0810F150  @ =gUnknown_020023F1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810F154
	add r0, r4, #0
	mov r1, #1
	mov r2, #15
	bl sub_0810E24C
	add r0, r4, #0
	mov r1, #2
	mov r2, #14
	bl sub_0810E24C
	b _0810F15E
	.byte 0x00
	.byte 0x00
_0810F150:
	.4byte gUnknown_020023F1
_0810F154:
	add r0, r4, #0
	mov r1, #1
	mov r2, #9
	bl sub_0810E24C
_0810F15E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F120

