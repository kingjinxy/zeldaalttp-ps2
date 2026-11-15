	THUMB_FUNC_START sub_080FA8C8
sub_080FA8C8: @ 0x080FA8C8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080FA90C  @ =gRam
	ldr r1, _080FA910  @ =0x00000FD2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FA920
	ldr r0, _080FA914  @ =0x00000FB2
	add r2, r7, r0
	add r2, r6, r2
	sub r1, r1, #128
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r3, #1
	and r0, r0, r3
	mov r1, #6
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FA918  @ =0x00000F92
	add r1, r7, r2
	add r1, r6, r1
	ldr r2, _080FA91C  @ =0x00000996
	add r0, r7, r2
	ldrb r0, [r0]
	lsr r0, r0, #3
	and r0, r0, r3
	strb r0, [r1]
	b _080FA95C
	.byte 0x00
	.byte 0x00
_080FA90C:
	.4byte gRam
_080FA910:
	.4byte 0x00000FD2
_080FA914:
	.4byte 0x00000FB2
_080FA918:
	.4byte 0x00000F92
_080FA91C:
	.4byte 0x00000996
_080FA920:
	ldr r0, _080FA964  @ =0x00000F52
	add r4, r7, r0
	add r4, r6, r4
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r2, _080FA968  @ =0x00001152
	add r1, r7, r2
	add r1, r6, r1
	ldr r2, _080FA96C  @ =gUnknown_0817A530
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r5, #1
	and r0, r0, r5
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #108
	bl sub_080CF0AC
	ldr r0, _080FA970  @ =0x00000FB2
	add r2, r7, r0
	add r2, r6, r2
	ldrb r0, [r4]
	lsr r0, r0, #1
	and r0, r0, r5
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
_080FA95C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FA964:
	.4byte 0x00000F52
_080FA968:
	.4byte 0x00001152
_080FA96C:
	.4byte gUnknown_0817A530
_080FA970:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080FA8C8

