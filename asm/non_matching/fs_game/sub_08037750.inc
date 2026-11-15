	THUMB_FUNC_START sub_08037750
sub_08037750: @ 0x08037750
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #2
	mov r1, #0
	strh r1, [r0]
_0803775C:
	add r0, r7, #2
	ldrh r1, [r0]
	cmp r1, #3
	bls _08037766
	b _08037814
_08037766:
	add r0, r7, #0
	ldr r1, _080377C0  @ =gUnknown_0200B1D0
	ldr r2, _080377C4  @ =gUnknown_03000494
	ldr r3, [r2]
	sub r2, r3, #2
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r7, #2
	ldrh r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #5
	add r2, r2, r4
	add r1, r1, r2
	ldrh r2, [r1]
	lsl r3, r2, #21
	lsr r1, r3, #21
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _080377C8  @ =gUnknown_03005E10
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldr r1, _080377C4  @ =gUnknown_03000494
	ldr r2, [r1]
	cmp r2, #7
	ble _080377D0
	add r1, r7, #0
	ldr r2, _080377CC  @ =gUnknown_03000940
	add r3, r7, #2
	ldrh r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #1
	add r2, r2, r4
	ldrh r3, [r2]
	mvn r2, r3
	ldrh r1, [r1]
	add r3, r2, #0
	add r2, r1, #0
	and r2, r2, r3
	add r1, r2, #0
	b _080377D2
_080377C0:
	.4byte gUnknown_0200B1D0
_080377C4:
	.4byte gUnknown_03000494
_080377C8:
	.4byte gUnknown_03005E10
_080377CC:
	.4byte gUnknown_03000940
_080377D0:
	mov r1, #0
_080377D2:
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08037810  @ =gUnknown_03000940
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	add r1, r7, #0
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r1, r7, #2
	add r0, r7, #2
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _0803775C
_08037810:
	.4byte gUnknown_03000940
_08037814:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08037750

