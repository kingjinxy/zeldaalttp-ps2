	THUMB_FUNC_START sub_08099324
sub_08099324: @ 0x08099324
	push {r4-r7,lr}
	ldr r3, _080993FC  @ =gRam
	ldr r1, _08099400  @ =0x00001726
	add r0, r3, r1
	ldrb r2, [r0]
	add r6, r2, #0
	ldr r0, _08099404  @ =gUnknown_08167E6F
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _08099408  @ =0x000016CD
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _0809940C  @ =gUnknown_08167E73
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r5, _08099410  @ =0x000016CE
	add r0, r3, r5
	strb r1, [r0]
	ldr r7, _08099414  @ =0x000016F8
	add r1, r3, r7
	mov r0, #24
	strb r0, [r1]
	ldr r1, _08099418  @ =0x000016CF
	add r0, r3, r1
	mov r1, #36
	strb r1, [r0]
	add r4, r4, #127
	add r0, r3, r4
	mov r4, #0
	strh r1, [r0]
	ldr r5, _0809941C  @ =0x000017DA
	add r0, r3, r5
	ldrb r5, [r0]
	cmp r5, #0
	beq _080993C0
	ldr r0, _08099420  @ =gUnknown_08167EA0
	add r0, r2, r0
	ldrb r1, [r0]
	add r7, r7, #214
	add r0, r3, r7
	strb r1, [r0]
	sub r7, r7, #167
	add r0, r3, r7
	strb r1, [r0]
	ldr r0, _08099424  @ =gUnknown_08167E77
	add r0, r2, r0
	ldrb r1, [r0]
	add r7, r7, #159
	add r0, r3, r7
	strh r1, [r0]
	ldr r0, _08099428  @ =gUnknown_08167E7B
	add r0, r2, r0
	ldrb r1, [r0]
	add r7, r7, #2
	add r0, r3, r7
	strh r1, [r0]
	sub r0, r5, #1
	lsl r0, r0, #3
	mov r5, #151
	lsl r5, r5, #4
	add r1, r3, r5
	strb r0, [r1]
	lsl r1, r2, #1
	add r0, r0, r1
	lsl r0, r0, #24
	ldr r1, _0809942C  @ =gUnknown_08167E80
	lsr r0, r0, #24
	add r1, r0, r1
	ldrh r2, [r1]
	add r7, r7, #2
	add r1, r3, r7
	strh r2, [r1]
	ldr r1, _08099430  @ =gUnknown_08167E90
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _08099434  @ =0x000017CC
	add r0, r3, r2
	strh r1, [r0]
_080993C0:
	ldr r5, _08099438  @ =0x00001702
	add r0, r3, r5
	mov r1, #1
	strb r1, [r0]
	ldr r7, _0809943C  @ =0x00001786
	add r0, r3, r7
	strb r1, [r0]
	ldr r1, _08099440  @ =0x00001806
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _08099444  @ =0x000017F1
	add r0, r3, r2
	strb r4, [r0]
	add r5, r5, #23
	add r0, r3, r5
	strb r4, [r0]
	sub r7, r7, #129
	add r0, r3, r7
	strb r4, [r0]
	sub r1, r1, #219
	add r0, r3, r1
	strb r4, [r0]
	mov r0, #2
	and r6, r6, r0
	cmp r6, #0
	bne _0809944C
	ldr r2, _08099448  @ =0x000016D7
	add r0, r3, r2
	b _08099450
	.byte 0x00
	.byte 0x00
_080993FC:
	.4byte gRam
_08099400:
	.4byte 0x00001726
_08099404:
	.4byte gUnknown_08167E6F
_08099408:
	.4byte 0x000016CD
_0809940C:
	.4byte gUnknown_08167E73
_08099410:
	.4byte 0x000016CE
_08099414:
	.4byte 0x000016F8
_08099418:
	.4byte 0x000016CF
_0809941C:
	.4byte 0x000017DA
_08099420:
	.4byte gUnknown_08167EA0
_08099424:
	.4byte gUnknown_08167E77
_08099428:
	.4byte gUnknown_08167E7B
_0809942C:
	.4byte gUnknown_08167E80
_08099430:
	.4byte gUnknown_08167E90
_08099434:
	.4byte 0x000017CC
_08099438:
	.4byte 0x00001702
_0809943C:
	.4byte 0x00001786
_08099440:
	.4byte 0x00001806
_08099444:
	.4byte 0x000017F1
_08099448:
	.4byte 0x000016D7
_0809944C:
	ldr r5, _08099458  @ =0x000016D6
	add r0, r3, r5
_08099450:
	strb r4, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_08099458:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_08099324

