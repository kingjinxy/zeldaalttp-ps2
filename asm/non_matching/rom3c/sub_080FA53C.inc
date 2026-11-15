	THUMB_FUNC_START sub_080FA53C
sub_080FA53C: @ 0x080FA53C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	ldr r6, _080FA5CC  @ =gRam
	ldr r1, _080FA5D0  @ =0x00000F52
	add r0, r6, r1
	add r7, r4, r0
	ldrb r0, [r7]
	sub r0, r0, #2
	mov r1, #128
	mov r8, r1
	and r0, r0, r1
	cmp r0, #0
	bne _080FA566
	add r0, r4, #0
	bl sub_080FACFC
_080FA566:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080FA5BE
	add r0, r4, #0
	bl sub_080C99DC
	ldr r1, _080FA5D4  @ =0x00001152
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	beq _080FA59A
	strb r5, [r2]
	strb r5, [r3]
_080FA59A:
	ldr r0, _080FA5D8  @ =0x00000F92
	add r2, r6, r0
	add r2, r2, r9
	ldr r1, _080FA5DC  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080FA5E0  @ =gUnknown_0817A4F0
	ldrb r0, [r7]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r9
	bl _call_via_r1
_080FA5BE:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FA5CC:
	.4byte gRam
_080FA5D0:
	.4byte 0x00000F52
_080FA5D4:
	.4byte 0x00001152
_080FA5D8:
	.4byte 0x00000F92
_080FA5DC:
	.4byte 0x00000996
_080FA5E0:
	.4byte gUnknown_0817A4F0
	THUMB_FUNC_END sub_080FA53C

