	THUMB_FUNC_START sub_08039CD4
sub_08039CD4: @ 0x08039CD4
	push {r4,r7,lr}
	mov r7, sp
	ldr r4, _08039CF4  @ =gUnknown_03006C80
	ldr r0, _08039CF4  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	add r0, r1, #0
	mov r1, #3
	bl __umodsi3
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #2
	bne _08039CF8
	mov r0, #129
	b _08039CFA
_08039CF4:
	.4byte gUnknown_03006C80
_08039CF8:
	mov r0, #0
_08039CFA:
	ldrb r1, [r4, #5]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	orr r0, r0, r2
	add r1, r0, #0
	strb r1, [r4, #5]
	ldr r0, _08039D10  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	add r0, r1, #0
	b _08039D14
_08039D10:
	.4byte gUnknown_03006C80
_08039D14:
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039CD4

	.byte 0x00
	.byte 0x00
