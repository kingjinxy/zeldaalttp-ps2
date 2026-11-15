	THUMB_FUNC_START sub_080D390C
sub_080D390C: @ 0x080D390C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080D3948  @ =gRam
	ldr r1, _080D394C  @ =0x00000F52
	add r3, r4, r1
	add r1, r0, r3
	mov r2, #0
	strb r2, [r1]
	ldr r5, _080D3950  @ =0x00001062
	add r1, r4, r5
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, r3
	strb r2, [r0]
	ldr r1, _080D3954  @ =0x00001776
	add r0, r4, r1
	strb r2, [r0]
	mov r0, #2
	bl sub_080A1588
	ldr r5, _080D3958  @ =0x00001662
	add r4, r4, r5
	ldrb r1, [r4]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D3948:
	.4byte gRam
_080D394C:
	.4byte 0x00000F52
_080D3950:
	.4byte 0x00001062
_080D3954:
	.4byte 0x00001776
_080D3958:
	.4byte 0x00001662
	THUMB_FUNC_END sub_080D390C

