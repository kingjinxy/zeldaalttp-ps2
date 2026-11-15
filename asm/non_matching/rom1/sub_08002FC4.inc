	thumb_func_start sub_08002FC4
sub_08002FC4: @ 0x08002FC4
	push {lr}
	push {r0, r1}
	ldr r2, _080031D8 @ =0x000003F0
	ands r0, r2
	ands r1, r2
	lsrs r0, r0, #4
	lsls r1, r1, #2
	adds r0, r0, r1
	mov r2, sl
	movs r3, #0x50
	ldrh r3, [r2, r3]
	lsrs r3, r3, #0xe
	lsls r3, r3, #2
	ldr r1, _080031DC @ =0x080092A0
	ldr r1, [r1, r3]
	ldrb r2, [r0, r1]
	cmp r2, #0x10
	pop {r0, r1}
	bhs _08002FFA
	movs r3, #8
	tst r1, r3
	bne _08002FF2
	lsrs r2, r2, #2
_08002FF2:
	tst r0, r3
	bne _08003008
	lsrs r2, r2, #1
	b _08003008
_08002FFA:
	cmp r2, #0xff
	beq _08003008
	movs r3, #0xff
	cmp r2, #0x20
	blo _08003006
	eors r3, r3
_08003006:
	adds r2, r3, #0
_08003008:
	movs r3, #1
	ands r2, r3
	pop {pc}
	.align 2, 0

