	thumb_func_start sub_08003F54
sub_08003F54: @ 0x08003F54
	push {r4, lr}
	ldr r4, _08004200 @ =0xFFFF8000
	tst r0, r4
	beq _08003F5E
	orrs r0, r4
_08003F5E:
	tst r1, r4
	beq _08003F64
	orrs r1, r4
_08003F64:
	tst r2, r4
	beq _08003F6A
	orrs r2, r4
_08003F6A:
	tst r3, r4
	beq _08003F70
	orrs r3, r4
_08003F70:
	eors r4, r4
	subs r2, r2, r0
	bpl _08003F7A
	rsbs r2, r2, #0
	movs r4, #0x20
_08003F7A:
	subs r3, r1, r3
	bpl _08003F84
	rsbs r3, r3, #0
	movs r1, #0x10
	orrs r4, r1
_08003F84:
	cmp r2, r3
	blo _08003F92
	push {r3}
	adds r3, r2, #0
	pop {r2}
	movs r1, #8
	orrs r4, r1
_08003F92:
	lsls r2, r2, #3
	adds r1, r3, #0
	lsls r1, r1, #1
	movs r0, #4
_08003F9A:
	cmp r2, r3
	blo _08003FA6
	adds r3, r3, r1
	adds r4, #1
	subs r0, #1
	bne _08003F9A
_08003FA6:
	ldr r1, _08004204 @ =0x08003EDC
	ldrb r0, [r1, r4]
	pop {r4, pc}

