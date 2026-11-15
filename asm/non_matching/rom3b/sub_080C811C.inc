	THUMB_FUNC_START sub_080C811C
sub_080C811C: @ 0x080C811C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C815C  @ =gRam
	ldr r1, _080C8160  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080C814E
	add r0, r4, #0
	bl sub_080C50E4
	ldr r1, _080C8164  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C814E
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
_080C814E:
	add r0, r4, #0
	bl sub_080C7BC0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C815C:
	.4byte gRam
_080C8160:
	.4byte 0x00001042
_080C8164:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C811C

