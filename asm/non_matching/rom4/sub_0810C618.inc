	THUMB_FUNC_START sub_0810C618
sub_0810C618: @ 0x0810C618
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810C64C  @ =gRam
	ldr r1, _0810C650  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #0
	beq _0810C686
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _0810C654  @ =0x00000F22
	add r0, r5, r2
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _0810C65C
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _0810C658
	sub r0, r2, #1
	b _0810C65A
	.byte 0x00
	.byte 0x00
_0810C64C:
	.4byte gRam
_0810C650:
	.4byte 0x00000FC2
_0810C654:
	.4byte 0x00000F22
_0810C658:
	add r0, r2, #1
_0810C65A:
	strb r0, [r1]
_0810C65C:
	ldr r0, _0810C678  @ =gRam
	ldr r1, _0810C67C  @ =0x00000F12
	add r0, r0, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _0810C70A
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810C680
	sub r0, r1, #1
	strb r0, [r2]
	b _0810C70A
_0810C678:
	.4byte gRam
_0810C67C:
	.4byte 0x00000F12
_0810C680:
	add r0, r1, #1
	strb r0, [r2]
	b _0810C70A
_0810C686:
	ldr r2, _0810C6A4  @ =0x00000F52
	add r0, r5, r2
	add r7, r4, r0
	strb r1, [r7]
	bl sub_080CAEC0
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _0810C6A8
	add r0, r4, #0
	bl sub_0810C958
	b _0810C70A
	.byte 0x00
	.byte 0x00
_0810C6A4:
	.4byte 0x00000F52
_0810C6A8:
	ldr r0, _0810C6F4  @ =0x00000D19
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _0810C700
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #48
	strb r1, [r6]
	mov r0, #3
	and r1, r1, r0
	add r1, r1, #8
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r1, _0810C6F8  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810C6FC  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _0810C70A
	.byte 0x00
	.byte 0x00
_0810C6F4:
	.4byte 0x00000D19
_0810C6F8:
	.4byte 0x00000FB2
_0810C6FC:
	.4byte 0x00001082
_0810C700:
	strb r2, [r1]
	mov r0, #2
	strb r0, [r7]
	mov r0, #176
	strb r0, [r6]
_0810C70A:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810C618

