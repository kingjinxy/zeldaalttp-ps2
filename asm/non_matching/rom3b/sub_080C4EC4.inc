	THUMB_FUNC_START sub_080C4EC4
sub_080C4EC4: @ 0x080C4EC4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080C4EE4  @ =gUnknown_08171FAF
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #6
	bne _080C4EE0
	ldr r0, _080C4EE8  @ =gBow
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080C4EEC
_080C4EE0:
	ldrb r1, [r1]
	b _080C4F06
_080C4EE4:
	.4byte gUnknown_08171FAF
_080C4EE8:
	.4byte gBow
_080C4EEC:
	ldr r1, _080C4F10  @ =gRam
	ldr r3, _080C4F14  @ =0x00000FF2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #215
	bne _080C4F04
	add r3, r3, #240
	add r0, r1, r3
	add r0, r2, r0
	mov r1, #32
	strb r1, [r0]
_080C4F04:
	mov r1, #9
_080C4F06:
	add r0, r2, #0
	bl sub_080C3FCC
	pop {r0}
	bx r0
_080C4F10:
	.4byte gRam
_080C4F14:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C4EC4

