	THUMB_FUNC_START sub_080C7EE8
sub_080C7EE8: @ 0x080C7EE8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl SpriteActive_Main
	ldr r2, _080C7F0C  @ =gRam
	ldr r1, _080C7F10  @ =0x0000142C
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C7F14
	add r0, r4, #0
	bl sub_080C7FF4
	b _080C7F38
_080C7F0C:
	.4byte gRam
_080C7F10:
	.4byte 0x0000142C
_080C7F14:
	ldr r1, _080C7F40  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #31
	bhi _080C7F32
	ldr r0, _080C7F44  @ =0x00001122
	add r2, r2, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
_080C7F32:
	add r0, r5, #0
	bl sub_080C7F48
_080C7F38:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C7F40:
	.4byte 0x00000FC2
_080C7F44:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080C7EE8

