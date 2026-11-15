	THUMB_FUNC_START sub_080BF584
sub_080BF584: @ 0x080BF584
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080BF5C8  @ =gRam
	ldr r3, _080BF5CC  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	mov r5, #182
	lsl r5, r5, #5
	add r3, r2, r5
	ldr r1, _080BF5D0  @ =0x00000DC5
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r5, _080BF5D4  @ =0x00000DD9
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r3]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080BF5D8  @ =0x0000097C
	add r1, r2, r3
	strb r0, [r1]
	lsl r0, r0, #16
	add r3, r2, #0
	cmp r0, #0
	blt _080BF5DC
	mov r1, #0
	b _080BF5DE
	.byte 0x00
	.byte 0x00
_080BF5C8:
	.4byte gRam
_080BF5CC:
	.4byte 0x00000961
_080BF5D0:
	.4byte 0x00000DC5
_080BF5D4:
	.4byte 0x00000DD9
_080BF5D8:
	.4byte 0x0000097C
_080BF5DC:
	mov r1, #1
_080BF5DE:
	ldr r5, _080BF62C  @ =0x00000964
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _080BF630  @ =0x0000097C
	add r1, r3, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080BF5F4
	neg r0, r0
	strb r0, [r1]
_080BF5F4:
	ldrb r1, [r1]
	ldr r2, _080BF634  @ =0x00000978
	add r0, r3, r2
	strb r1, [r0]
	ldr r5, _080BF638  @ =0x000016C4
	add r2, r3, r5
	ldr r1, _080BF63C  @ =0x00000DCF
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r5, _080BF640  @ =0x00000DE3
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080BF644  @ =0x0000097D
	add r1, r3, r2
	strb r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	blt _080BF648
	mov r2, #0
	b _080BF64A
_080BF62C:
	.4byte 0x00000964
_080BF630:
	.4byte 0x0000097C
_080BF634:
	.4byte 0x00000978
_080BF638:
	.4byte 0x000016C4
_080BF63C:
	.4byte 0x00000DCF
_080BF640:
	.4byte 0x00000DE3
_080BF644:
	.4byte 0x0000097D
_080BF648:
	mov r2, #1
_080BF64A:
	add r0, r3, #0
	ldr r4, _080BF674  @ =0x00000965
	add r1, r0, r4
	strb r2, [r1]
	ldr r5, _080BF678  @ =0x0000097D
	add r1, r0, r5
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080BF662
	neg r0, r0
	strb r0, [r1]
_080BF662:
	ldrb r1, [r1]
	ldr r2, _080BF67C  @ =0x00000979
	add r0, r3, r2
	strb r1, [r0]
	bl sub_080BF680
	pop {r4,r5}
	pop {r0}
	bx r0
_080BF674:
	.4byte 0x00000965
_080BF678:
	.4byte 0x0000097D
_080BF67C:
	.4byte 0x00000979
	THUMB_FUNC_END sub_080BF584

