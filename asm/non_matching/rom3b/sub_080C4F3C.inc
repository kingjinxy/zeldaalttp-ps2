	THUMB_FUNC_START sub_080C4F3C
sub_080C4F3C: @ 0x080C4F3C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080C4F64  @ =gRam
	ldr r1, _080C4F68  @ =0x000015F0
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C4F5C
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
	add r0, r4, #0
	bl sub_080C444C
_080C4F5C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C4F64:
	.4byte gRam
_080C4F68:
	.4byte 0x000015F0
	THUMB_FUNC_END sub_080C4F3C

