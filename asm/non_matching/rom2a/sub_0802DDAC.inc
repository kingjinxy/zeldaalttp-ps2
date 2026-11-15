	THUMB_FUNC_START sub_0802DDAC
sub_0802DDAC: @ 0x0802DDAC
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r5, _0802DE28  @ =gUnknown_03000420
	mov r1, #0
	mov r0, #1
	strb r0, [r5, #2]
	strb r1, [r5, #3]
	str r1, [sp]
	ldr r4, _0802DE2C  @ =gBG0Buffer
	ldr r2, _0802DE30  @ =0x01000400
	mov r0, sp
	add r1, r4, #0
	bl CpuFastSet
	ldrb r1, [r5, #3]
	lsl r1, r1, #11
	add r0, r4, #0
	add r0, r0, #44
	add r1, r1, r0
	mov r2, #144
	lsl r2, r2, #3
	add r3, r1, r2
	ldr r6, _0802DE34  @ =0x0000101C
	add r0, r6, #0
	strh r0, [r3]
	add r6, r6, #1
	add r0, r6, #0
	strh r0, [r3, #2]
	mov r0, #152
	lsl r0, r0, #3
	add r3, r1, r0
	add r6, r6, #1
	add r0, r6, #0
	strh r0, [r3]
	ldr r0, _0802DE38  @ =0x000004C2
	add r3, r1, r0
	ldr r1, _0802DE3C  @ =0x0000101F
	add r0, r1, #0
	strh r0, [r3]
	ldrb r0, [r5, #3]
	lsl r0, r0, #11
	add r4, r4, #56
	add r0, r0, r4
	add r2, r0, r2
	ldr r0, _0802DE40  @ =gUnknown_03006C80
	ldr r1, [r0, #8]
	ldr r0, _0802DE44  @ =0x0001869F
	cmp r1, r0
	bls _0802DE10
	add r1, r0, #0
_0802DE10:
	mov r3, #192
	lsl r3, r3, #6
	add r0, r2, #0
	mov r2, #5
	bl sub_0802DD50
	bl sub_0802C934
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0802DE28:
	.4byte gUnknown_03000420
_0802DE2C:
	.4byte gBG0Buffer
_0802DE30:
	.4byte 0x01000400
_0802DE34:
	.4byte 0x0000101C
_0802DE38:
	.4byte 0x000004C2
_0802DE3C:
	.4byte 0x0000101F
_0802DE40:
	.4byte gUnknown_03006C80
_0802DE44:
	.4byte 0x0001869F
	THUMB_FUNC_END sub_0802DDAC

