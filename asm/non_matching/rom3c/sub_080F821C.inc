	THUMB_FUNC_START sub_080F821C
sub_080F821C: @ 0x080F821C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080F824C  @ =gRam
	ldr r2, _080F8250  @ =0x000010C2
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	bl sub_080C3BD0
	ldr r1, _080F8254  @ =0x000017AA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F8244
	ldr r2, _080F8258  @ =0x000017F1
	add r1, r4, r2
	mov r0, #64
	strb r0, [r1]
_080F8244:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F824C:
	.4byte gRam
_080F8250:
	.4byte 0x000010C2
_080F8254:
	.4byte 0x000017AA
_080F8258:
	.4byte 0x000017F1
	THUMB_FUNC_END sub_080F821C

