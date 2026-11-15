	THUMB_FUNC_START sub_08035AF8
sub_08035AF8: @ 0x08035AF8
	push {r4,r5,lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _08035B54
	mov r0, #7
	strb r0, [r1, #20]
	mov r0, #150
	strb r0, [r1, #23]
	ldr r0, _08035B5C  @ =gUnknown_0201F000
	str r2, [r0]
	mov r4, #0
	ldr r0, _08035B60  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcs _08035B54
	ldr r5, _08035B64  @ =gUnknown_03006A58
_08035B22:
	mov r0, #104
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08035B46
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r5
	ldr r0, [r0]
	mov r2, #160
	lsl r2, r2, #12
	ldr r3, _08035B68  @ =0xFFF00000
	bl sub_0803D4A4
_08035B46:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08035B60  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcc _08035B22
_08035B54:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035B5C:
	.4byte gUnknown_0201F000
_08035B60:
	.4byte gUnknown_03006C80
_08035B64:
	.4byte gUnknown_03006A58
_08035B68:
	.4byte 0xFFF00000
	THUMB_FUNC_END sub_08035AF8

