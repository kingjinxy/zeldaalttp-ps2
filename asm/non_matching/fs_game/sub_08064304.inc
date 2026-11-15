	THUMB_FUNC_START sub_08064304
sub_08064304: @ 0x08064304
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08064340  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #56
	ldrb r0, [r1]
	cmp r0, #0
	beq _0806437C
_08064328:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08064344
	b _0806434C
_08064340:
	.4byte gUnknown_03006A30
_08064344:
	ldr r0, [r7]
	bl 0x08003828
	b _08064328
_0806434C:
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
	ldr r0, _08064378  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _0806439C
	.byte 0x00
	.byte 0x00
_08064378:
	.4byte gUnknown_03006A30
_0806437C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0806439C
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
_0806439C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08064304

