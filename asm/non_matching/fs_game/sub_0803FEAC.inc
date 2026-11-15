	THUMB_FUNC_START sub_0803FEAC
sub_0803FEAC: @ 0x0803FEAC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803FF58  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, _0803FF58  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, [r7]
	cmp r0, r1
	beq _0803FEFA
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
_0803FEFA:
	ldr r0, _0803FF58  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	cmp r1, #0
	bne _0803FF12
	b _0804003A
_0803FF12:
	ldr r0, _0803FF58  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _0803FF5C
	ldr r0, _0803FF58  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08040066
	.byte 0x00
	.byte 0x00
_0803FF58:
	.4byte gUnknown_03006A30
_0803FF5C:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803FFA4
	ldr r0, _0803FFA0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08040038
_0803FFA0:
	.4byte gUnknown_03006A30
_0803FFA4:
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_08040074
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #32
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803FFCC
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #192
	bl 0x08003E10
_0803FFCC:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #104
	bls _0803FFE8
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0803FFE8:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #8
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08040028
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_080407E0
	b _08040038
_08040028:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08040038:
	b _08040066
_0804003A:
	ldr r0, _08040070  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
_08040066:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08040070:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0803FEAC

