	THUMB_FUNC_START sub_0801A08C
sub_0801A08C: @ 0x0801A08C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	ldr r6, _0801A0A4  @ =gUnknown_03006C80
	ldrb r0, [r6]
	cmp r0, #1
	bne _0801A0AC
	ldr r0, _0801A0A8  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	b _0801A0E0
	.byte 0x00
	.byte 0x00
_0801A0A4:
	.4byte gUnknown_03006C80
_0801A0A8:
	.4byte gUnknown_03006A30
_0801A0AC:
	cmp r0, #1
	blt _0801A0E2
	cmp r0, #4
	bgt _0801A0E2
	bl 0x0800099C
	ldr r5, _0801A110  @ =gUnknown_03006A30
	ldr r1, _0801A114  @ =gUnknown_08139B20
	mov r8, r1
	ldr r1, [r7, #100]
	ldrb r1, [r1, #10]
	lsl r4, r1, #1
	add r4, r4, r1
	ldrb r1, [r6]
	sub r1, r1, #1
	bl __umodsi3
	add r4, r4, r0
	add r4, r4, r8
	ldrb r1, [r4]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r5, r5, #40
	add r0, r0, r5
	ldr r0, [r0]
_0801A0E0:
	str r0, [r7, #100]
_0801A0E2:
	ldr r1, [r7, #100]
	add r0, r7, #0
	bl sub_0803CECC
	add r1, r7, #0
	add r1, r1, #43
	strb r0, [r1]
	bl 0x0800099C
	ldr r2, _0801A118  @ =gUnknown_08139B1C
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r1, [r1]
	add r0, r7, #0
	add r0, r0, #114
	strb r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801A110:
	.4byte gUnknown_03006A30
_0801A114:
	.4byte gUnknown_08139B20
_0801A118:
	.4byte gUnknown_08139B1C
	THUMB_FUNC_END sub_0801A08C

