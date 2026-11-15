	THUMB_FUNC_START sub_0802DC80
sub_0802DC80: @ 0x0802DC80
	push {r4-r6,lr}
	mov r5, #0
	b _0802DD34
_0802DC86:
	add r0, r5, #0
	bl sub_08063C5C
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r4, #28]
	mov r0, #228
	lsl r0, r0, #1
	strh r0, [r4, #54]
	ldr r0, _0802DCB8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, #3
	beq _0802DCCC
	cmp r0, #3
	bgt _0802DCBC
	cmp r0, #2
	beq _0802DCC2
	b _0802DCE2
	.byte 0x00
	.byte 0x00
_0802DCB8:
	.4byte gUnknown_03006C80
_0802DCBC:
	cmp r0, #4
	beq _0802DCD6
	b _0802DCE2
_0802DCC2:
	lsl r0, r5, #2
	add r0, r0, r5
	lsl r0, r0, #4
	add r0, r0, #80
	b _0802DCE0
_0802DCCC:
	lsl r0, r5, #2
	add r0, r0, r5
	add r0, r0, #10
	lsl r0, r0, #3
	b _0802DCE0
_0802DCD6:
	lsl r0, r5, #2
	add r0, r0, r5
	add r0, r0, #7
	lsl r0, r0, #3
	add r0, r0, #4
_0802DCE0:
	strh r0, [r4, #50]
_0802DCE2:
	add r3, r5, #0
	add r3, r3, #12
	mov r0, #15
	add r2, r3, #0
	and r2, r2, r0
	ldrb r0, [r4, #30]
	mov r6, #16
	neg r6, r6
	add r1, r6, #0
	and r0, r0, r1
	orr r0, r0, r2
	mov r1, #15
	and r3, r3, r1
	lsl r3, r3, #4
	and r0, r0, r1
	orr r0, r0, r3
	strb r0, [r4, #30]
	ldr r0, _0802DD44  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	cmp r5, r0
	bne _0802DD10
	ldr r0, _0802DD48  @ =gUnknown_03000450
	str r4, [r0]
_0802DD10:
	add r0, r5, #0
	mov r1, #255
	mov r2, #0
	bl sub_08063D28
	mov r0, #13
	mov r1, #0
	add r2, r5, #0
	bl sub_0804C8A8
	mov r0, #13
	mov r1, #2
	add r2, r5, #0
	bl sub_0804C8A8
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
_0802DD34:
	ldr r0, _0802DD4C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcc _0802DC86
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802DD44:
	.4byte gLCDRegisterBuffer
_0802DD48:
	.4byte gUnknown_03000450
_0802DD4C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802DC80

