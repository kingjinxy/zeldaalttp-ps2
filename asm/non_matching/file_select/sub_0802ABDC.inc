	THUMB_FUNC_START sub_0802ABDC
sub_0802ABDC: @ 0x0802ABDC
	push {r4,lr}
	add r3, r0, #0
	ldrb r0, [r3, #11]
	cmp r0, #0
	beq _0802AC50
	ldrb r1, [r3, #23]
	mov r4, #1
	add r0, r4, #0
	and r0, r0, r1
	add r2, r1, #0
	cmp r0, #0
	beq _0802ABFA
	ldr r0, _0802AC58  @ =gUnknown_03006A30
	add r0, r0, #57
	strb r4, [r0]
_0802ABFA:
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	beq _0802AC08
	ldr r0, _0802AC58  @ =gUnknown_03006A30
	add r0, r0, #201
	strb r4, [r0]
_0802AC08:
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	beq _0802AC18
	ldr r0, _0802AC58  @ =gUnknown_03006A30
	ldr r2, _0802AC5C  @ =0x00000159
	add r0, r0, r2
	strb r4, [r0]
_0802AC18:
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0802AC28
	ldr r0, _0802AC58  @ =gUnknown_03006A30
	ldr r1, _0802AC60  @ =0x000001E9
	add r0, r0, r1
	strb r4, [r0]
_0802AC28:
	mov r0, #3
	strb r0, [r3, #20]
	ldr r1, _0802AC64  @ =gUnknown_0813D524
	ldrb r0, [r3, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [r3, #12]
	add r2, r3, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	mov r0, #192
	lsl r0, r0, #8
	str r0, [r3, #16]
	mov r0, #12
	bl sub_08003DFC
_0802AC50:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802AC58:
	.4byte gUnknown_03006A30
_0802AC5C:
	.4byte 0x00000159
_0802AC60:
	.4byte 0x000001E9
_0802AC64:
	.4byte gUnknown_0813D524
	THUMB_FUNC_END sub_0802ABDC

