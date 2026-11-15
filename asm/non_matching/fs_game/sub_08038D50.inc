	THUMB_FUNC_START sub_08038D50
sub_08038D50: @ 0x08038D50
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _08038DB0  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	add r0, r1, #0
	mov r1, #60
	bl __udivsi3
	str r0, [r7]
	mov r0, #2
	bl sub_0800D6A4
	ldr r4, _08038DB4  @ =gUnknown_0201ED90
	ldr r1, [r7]
	add r0, r1, #0
	mov r1, #60
	bl __udivsi3
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	str r0, [r4, #8]
	ldr r4, _08038DB4  @ =gUnknown_0201ED90
	ldr r1, [r7]
	add r0, r1, #0
	mov r1, #60
	bl __umodsi3
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	str r0, [r4, #12]
	bl sub_08038DB8
	add r1, r0, #0
	ldr r0, _08038DB4  @ =gUnknown_0201ED90
	lsl r2, r1, #16
	lsr r1, r2, #16
	str r1, [r0, #16]
	ldr r0, _08038DB4  @ =gUnknown_0201ED90
	ldr r1, _08038DB0  @ =gUnknown_03006C80
	ldrb r2, [r1]
	str r2, [r0, #20]
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_08038DB0:
	.4byte gUnknown_03006C80
_08038DB4:
	.4byte gUnknown_0201ED90
	THUMB_FUNC_END sub_08038D50

