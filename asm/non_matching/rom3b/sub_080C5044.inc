	THUMB_FUNC_START sub_080C5044
sub_080C5044: @ 0x080C5044
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r0, _080C5064  @ =gRam
	ldr r1, _080C5068  @ =0x0000180D
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C506C
	mov r0, #0
	b _080C5076
_080C5064:
	.4byte gRam
_080C5068:
	.4byte 0x0000180D
_080C506C:
	add r0, r4, #0
	bl sub_080C4FC8
	lsl r0, r0, #24
	lsr r0, r0, #24
_080C5076:
	add sp, sp, #4
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C5044

	.byte 0x00
	.byte 0x00
