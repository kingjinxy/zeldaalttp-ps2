	THUMB_FUNC_START sub_0803A320
sub_0803A320: @ 0x0803A320
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _0803A45C  @ =gUnknown_03005060
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	add r0, r0, #156
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #150
	lsl r1, r1, #1
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #222
	lsl r1, r1, #1
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #147
	lsl r1, r1, #2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #183
	lsl r1, r1, #2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #219
	lsl r1, r1, #2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #255
	lsl r1, r1, #2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A460  @ =0x0000048C
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A464  @ =0x0000051C
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A468  @ =0x000005AC
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A46C  @ =0x0000063C
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A470  @ =0x000006CC
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A474  @ =0x0000075C
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A478  @ =0x000007EC
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A45C  @ =gUnknown_03005060
	add r1, r0, #0
	ldr r1, _0803A47C  @ =0x0000087C
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0803A480  @ =gUnknown_03006C80
	ldrb r0, [r1]
	cmp r0, #3
	beq _0803A4AC
	cmp r0, #3
	bgt _0803A484
	cmp r0, #2
	beq _0803A48A
	b _0803A53C
_0803A45C:
	.4byte gUnknown_03005060
_0803A460:
	.4byte 0x0000048C
_0803A464:
	.4byte 0x0000051C
_0803A468:
	.4byte 0x000005AC
_0803A46C:
	.4byte 0x0000063C
_0803A470:
	.4byte 0x000006CC
_0803A474:
	.4byte 0x0000075C
_0803A478:
	.4byte 0x000007EC
_0803A47C:
	.4byte 0x0000087C
_0803A480:
	.4byte gUnknown_03006C80
_0803A484:
	cmp r0, #4
	beq _0803A4E8
	b _0803A53C
_0803A48A:
	ldr r0, _0803A4A8  @ =gUnknown_03005060
	ldr r1, [r0, #8]
	str r1, [r7]
	ldr r0, _0803A4A8  @ =gUnknown_03005060
	ldr r2, _0803A4A8  @ =gUnknown_03005060
	add r1, r2, #0
	add r2, r2, #152
	ldr r1, [r2]
	str r1, [r0, #8]
	ldr r1, _0803A4A8  @ =gUnknown_03005060
	add r0, r1, #0
	add r1, r1, #152
	ldr r0, [r7]
	str r0, [r1]
	b _0803A53C
_0803A4A8:
	.4byte gUnknown_03005060
_0803A4AC:
	ldr r0, _0803A4E4  @ =gUnknown_03005060
	ldr r1, [r0, #8]
	str r1, [r7]
	ldr r0, _0803A4E4  @ =gUnknown_03005060
	ldr r2, _0803A4E4  @ =gUnknown_03005060
	add r1, r2, #0
	add r2, r2, #152
	ldr r1, [r2]
	str r1, [r0, #8]
	ldr r0, _0803A4E4  @ =gUnknown_03005060
	add r1, r0, #0
	add r0, r0, #152
	ldr r2, _0803A4E4  @ =gUnknown_03005060
	add r1, r2, #0
	mov r1, #148
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	str r1, [r0]
	ldr r1, _0803A4E4  @ =gUnknown_03005060
	add r0, r1, #0
	mov r0, #148
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r7]
	str r0, [r1]
	b _0803A53C
	.byte 0x00
	.byte 0x00
_0803A4E4:
	.4byte gUnknown_03005060
_0803A4E8:
	ldr r0, _0803A538  @ =gUnknown_03005060
	ldr r1, [r0, #8]
	str r1, [r7]
	ldr r0, _0803A538  @ =gUnknown_03005060
	ldr r2, _0803A538  @ =gUnknown_03005060
	add r1, r2, #0
	add r2, r2, #152
	ldr r1, [r2]
	str r1, [r0, #8]
	ldr r0, _0803A538  @ =gUnknown_03005060
	add r1, r0, #0
	add r0, r0, #152
	ldr r2, _0803A538  @ =gUnknown_03005060
	add r1, r2, #0
	mov r1, #148
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	str r1, [r0]
	ldr r0, _0803A538  @ =gUnknown_03005060
	add r1, r0, #0
	mov r1, #148
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r2, _0803A538  @ =gUnknown_03005060
	add r1, r2, #0
	mov r1, #220
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	str r1, [r0]
	ldr r1, _0803A538  @ =gUnknown_03005060
	add r0, r1, #0
	mov r0, #220
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r7]
	str r0, [r1]
	b _0803A53C
	.byte 0x00
	.byte 0x00
_0803A538:
	.4byte gUnknown_03005060
_0803A53C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803A320

