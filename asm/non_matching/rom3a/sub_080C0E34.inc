	THUMB_FUNC_START sub_080C0E34
sub_080C0E34: @ 0x080C0E34
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080C0EAC  @ =gRam
	ldr r5, _080C0EB0  @ =0x00000975
	add r3, r4, r5
	strb r1, [r3]
	mov r3, #151
	lsl r3, r3, #4
	add r1, r4, r3
	strb r2, [r1]
	ldr r5, _080C0EB4  @ =0x00000DC5
	add r2, r4, r5
	add r2, r0, r2
	ldrb r3, [r2]
	mov r5, #150
	lsl r5, r5, #4
	add r1, r4, r5
	strb r3, [r1]
	ldr r3, _080C0EB8  @ =0x00000958
	add r1, r4, r3
	ldrb r3, [r1]
	ldrb r1, [r2]
	sub r1, r1, r3
	add r5, r5, #12
	add r2, r4, r5
	strb r1, [r2]
	ldr r2, _080C0EBC  @ =0x00000DD9
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r3, _080C0EC0  @ =0x00000961
	add r1, r4, r3
	strb r2, [r1]
	ldr r5, _080C0EC4  @ =0x00000DCF
	add r2, r4, r5
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r5, _080C0EC8  @ =0x00000964
	add r1, r4, r5
	strb r3, [r1]
	ldr r3, _080C0ECC  @ =0x00000952
	add r1, r4, r3
	ldrb r3, [r1]
	ldrb r1, [r2]
	sub r1, r1, r3
	add r5, r5, #9
	add r2, r4, r5
	strb r1, [r2]
	ldr r2, _080C0ED0  @ =0x00000DE3
	add r1, r4, r2
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _080C0ED4  @ =0x00000965
	add r4, r4, r3
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C0EAC:
	.4byte gRam
_080C0EB0:
	.4byte 0x00000975
_080C0EB4:
	.4byte 0x00000DC5
_080C0EB8:
	.4byte 0x00000958
_080C0EBC:
	.4byte 0x00000DD9
_080C0EC0:
	.4byte 0x00000961
_080C0EC4:
	.4byte 0x00000DCF
_080C0EC8:
	.4byte 0x00000964
_080C0ECC:
	.4byte 0x00000952
_080C0ED0:
	.4byte 0x00000DE3
_080C0ED4:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080C0E34

