	THUMB_FUNC_START sub_080FD098
sub_080FD098: @ 0x080FD098
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080FD068
	ldr r6, _080FD0F4  @ =gRam
	ldr r1, _080FD0F8  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080FD0BC
	add r0, r4, #0
	bl sub_080FD068
_080FD0BC:
	ldr r3, _080FD0FC  @ =0x00000F82
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FD0CE
	add r0, r4, #0
	bl sub_080FD068
_080FD0CE:
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _080FD100  @ =0x00000FC2
	add r0, r6, r1
	add r2, r5, r0
	ldrb r1, [r2]
	cmp r1, #0
	bne _080FD0EC
	ldr r3, _080FD104  @ =0x00000F52
	add r0, r6, r3
	add r0, r5, r0
	strb r1, [r0]
	mov r0, #64
	strb r0, [r2]
_080FD0EC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD0F4:
	.4byte gRam
_080FD0F8:
	.4byte 0x00000996
_080FD0FC:
	.4byte 0x00000F82
_080FD100:
	.4byte 0x00000FC2
_080FD104:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FD098

